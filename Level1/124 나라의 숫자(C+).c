#include <string>
#include <vector>

using namespace std;

int check_num(int num) {
	if (num == 0) {
		return  1;
	}
	else if (num == 3) {
		return 4;
	}

	return num;
}

string solution(int n) {
	string answer = "";

	while (n > 0) {
		int num = check_num(n % 4);

		answer = to_string(num) + answer;

		n /= 4;
	}

	return answer;
}