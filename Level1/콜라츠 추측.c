#include <string>
#include <vector>

using namespace std;

int solution(int num) {
	int answer = 0;
	long long number = num;

	while (number != 1) {
		number = 1 & number ? number * 3 + 1 : number / 2;
		answer++;
	}

	return answer > 500 ? -1 : answer;
}