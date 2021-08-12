#include <string>
#include <vector>

using namespace std;

int solution(vector<int> priorities, int location) {
	int answer = 0;
	int len = priorities.size();
	int current_Index = 0;

	while (1) {
		int temp = current_Index + len;

		for (int i = current_Index; i < temp; i++) {// ���� ����� index���� ������ ���� ��ŭ üũ
			if (priorities[i%len] > priorities[current_Index]) {
				current_Index = i % len;
			}
		}

		if (current_Index == location) { //Ż�� ����
			answer++;
			break;
		}
		else {                         //Ż�� ������ �ȸ����� ���� ���� ū ���� 0���� ����� �ݺ�
			answer++;
			priorities[current_Index] = 0;
		}

	}

	return answer;
}