#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
	vector<int> answer;
	int check = 0; // �ڸ����� �˱� ����

	while (n) {
		check = n % 10; // ���� n�� ���� ���ڸ��� Ȯ�� 

		if (check == 0) { // �̰� 0�̰� ���Ͱ� ��� ������ ���� ����
			if (!answer.empty()) {
				answer.push_back(check);
			}
		}
		else {// �� �̿ܿ��� ���Ϳ� ����
			answer.push_back(check);
		}

		n /= 10; // 10 ������ �����⸦ �ؼ� �Ͽ� �ڸ��� ������
	}

	return answer;
}