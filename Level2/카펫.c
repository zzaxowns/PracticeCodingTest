#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
	vector<int> answer;
	int len = (brown - 4) / 2;

	for (int i = len; i > 0; i--) {
		bool temp = (len - i) * i == yellow ? true : false;

		if (temp) {
			answer.push_back(i);
			break;
		}
	}

	return answer;
}