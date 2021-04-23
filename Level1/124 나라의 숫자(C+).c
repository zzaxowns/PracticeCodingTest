#include <string>
#include <vector>

using namespace std;

int check_num(int num) {
	if (num == 0) {
		return 4;
	}

	return num;
}

string solution(int n) {
	string answer = "";

	while (n > 3) {
		int num = check_num(n % 3);
		answer = to_string(num) + answer;

		n /= 3;
	}

	int num = check_num(n % 3);
	answer = to_string(num) + answer;

	return answer;
}