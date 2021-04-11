//#include <string>
//#include <vector>
//
//using namespace std;
//
//long long solution(int a, int b) {
//	long long answer = 0;
//
//	if (a == b) { // a�� b�� ���� ��
//		answer = a;
//	}
//	else {
//		answer = ((a + b) * (abs(a - b) + 1)) / 2;
//	}
//
//	return answer;
//}

#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
	long long answer = 0;

	if (a == b) { // a�� b�� ���� ��
		answer = a;
	}
	else {
		int gap = abs(a - b);
		int small = min(a, b);

		for (int i = 0; i <= gap; i++) {
			answer += (small + i);
		}
	}

	return answer;
}