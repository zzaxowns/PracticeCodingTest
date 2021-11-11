#include <string>
#include <vector>

using namespace std;

string solution(string s) {
	string answer = "";
	vector<int> numbers;
	int temp = 1;
	int len = s.size();

	for (int i = 0; i < len; i++) {

		if (s[i] == '-')
			temp = -1;
		else if (s[i] != ' ') {
			numbers.push_back((s[i] - '0')*temp);
			temp = temp == -1 ? 1 : temp;
		}

	}


	return answer;
}