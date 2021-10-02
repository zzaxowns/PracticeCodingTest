#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
	string answer = s;
	bool isStart = true;

	transform(answer.begin(), answer.end(), answer.begin(), ::tolower);

	for (int i = 0; i < answer.size(); i++) {

		if (answer[i] == ' ') {
			isStart = true;
			continue;
		}

		if (isStart) {
			answer[i] = answer[i] >= '0' && answer[i] <= '9' ? answer[i] : answer[i] - 32;
			isStart = !isStart;
			continue;
		}


	}

	return answer;
}