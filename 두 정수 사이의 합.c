#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
	long long answer = 0;

	if (a == b) { // a와 b가 같을 때
		answer = a;
	}
	else {
		answer = ((a + b) * (abs(a - b) + 1)) / 2;
	}

	return answer;
}