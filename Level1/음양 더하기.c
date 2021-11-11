#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
	int answer = 0;
	int len = absolutes.size();

	for (int i = 0; i < len; i++) {
		absolutes[i] = signs[i] == true ? absolutes[i] : -1 * absolutes[i];
	}

	for (auto num : absolutes)
		answer += num;

	return answer;
}