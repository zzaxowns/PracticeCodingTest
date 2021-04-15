#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) {
	long long answer = 0;
	int num = sqrt(n);

	if ((long long)num*num == n) {
		answer = (long long)(num + 1) * (num + 1);
	}
	else {
		answer = -1;
	}

	return answer;
}