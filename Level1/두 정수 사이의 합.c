#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
	long long answer = 0;

	if (a == b) { // a�� b�� ���� ��
		answer = a;
	}
	else {
		answer = ((a + b) * (abs(a - b) + 1)) / 2;
	}

	return answer;
}