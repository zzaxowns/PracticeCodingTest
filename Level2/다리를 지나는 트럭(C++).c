#include <string>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
	int answer = 0;
	stack<int> wait;
	queue<int> buffer;
	int len = truck_weights.size();
	int current_weight = 0;

	for (int i = len; i >= 0; i--) {
		wait.push(truck_weights[i]);
	}

	while (!(buffer.empty() && wait.empty())) {

		if ((current_weight + wait.top() < weight) // ���ο� Ʈ���� �� �� ���� ��
			|| buffer.size() < bridge_length) {
			current_weight += wait.top();
			buffer.push(wait.top());

			wait.pop();
		}
		else { // ���ο� Ʈ���� �� �� ���� �� 0�� �߰��ؼ� ť�� �о��ش�.
			if (current_weight != 0) {
				buffer.push(0);

				if (buffer.size() > bridge_length) {// �տ� Ʈ���� �з��� ������
					int temp = buffer.front();
					current_weight -= temp;
					buffer.pop();
				}
			}
		}

		answer++;

	}

	return answer;
}