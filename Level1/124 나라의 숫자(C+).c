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
	vector<int> temp;
	int len = 0;

	while (n > 0) {
		if (n < 4) {
			temp.push_back(n);
			len++;
			n = 0;
		}
		else {
			if (temp[len] >= 3 || temp.empty()) {
				temp.push_back(1);
				len++;
			}
			else {
				temp[len]++;
			}

			n -= 3;
		}
	}

	for (int i = 0; i < len; i++) {
		answer = to_string(temp[i]) + answer;
	}

	return answer;
}