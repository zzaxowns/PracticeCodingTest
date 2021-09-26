#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
	string answer = s;
	transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
	bool isEven = true;

	for (int i = 0; i < answer.size(); i++) {
		if (answer[i] == ' ') {
			isEven = true;
		}
		else {
			if (isEven) {
				answer[i] = answer[i] - 32;
			}

			isEven = !isEven;
		}
	}

	return answer;
}