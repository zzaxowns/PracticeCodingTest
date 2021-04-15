//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(int n) {
//	int answer = 0;
//	int count = 0;
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= i; j++) {
//			if (count > 2) { // ����� 2�� �̻��̸� ���� Ż��
//				break;
//			}
//
//			if (i%j == 0) { // ����� ���� ������ count +1
//				count++;
//			}
//		}
//
//		if (count == 2) { // for���� ������ �� ����� 2���� �Ҽ�
//			answer++;
//		}
//
//		count = 0; //count ���� �ʱ�ȭ 
//	}
//
//	return answer;
//} // ȿ�����̶� �ڸ� ���� �� �Ҽ��� �ȵ�.

#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
	int answer = 0;
	bool isbreak = false;

	for (int i = 2; i <= n; i++) {
		isbreak = false;

		for (int j = 2; j <= sqrt(i); j++) {
			if (i%j == 0) { //��������.
				isbreak = true;
				break;
			}
		}

		if (!isbreak) {
			answer++;
		}

	}

	return answer;
} // �ڸ��� �� �Ҽ� ���� �����ѵ� ȿ���� �κп��� ������