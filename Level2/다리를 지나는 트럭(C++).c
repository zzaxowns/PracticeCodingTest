#include <string>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
	int answer = 0;
	stack<int> wait;   // ��� ����
	queue<int> buffer; // �ٸ� ���� ���� 
	int len = truck_weights.size(); // ���� �ʱ�ȭ ����
	int current = 0;    //�ٸ��� ���� ���� ����

	for (int i = len - 1; i >= 0; i--) { //��� ���� �ʱ�ȭ 
		wait.push(truck_weights[i]);
	}

	while (!wait.empty()) {

		if (buffer.size() >= bridge_length) { // �ٸ� ���� ���۰� �����Ǹ� �� �տ� ���� ���ֱ�
			current -= buffer.front();
			buffer.pop();
		}

		if (current + wait.top() <= weight) { // �ٸ��� �߷��� �ʰ����� ������ ��� ���� ������
			buffer.push(wait.top());
			current += wait.top();
			wait.pop();
		}
		else { // �߷��� �ʰ��� ��� '0'�̶�� ������ �������� ���� ä���
			buffer.push(0);
		}

		answer++; // ����Ŭ�� �� ������ �ð�++

		if (wait.empty()) { // ���࿡ ��� ������ ���� = ������ ������ �޸��� ���� = �ٸ��� ����ŭ �ð� �ʿ� 
			answer += bridge_length;
			break;
		}

	}

	return answer;
}