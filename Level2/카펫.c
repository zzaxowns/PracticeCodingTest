#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int brown, int yellow) {
	vector<int> answer;
	int len = (brown + 4) / 2;

	for (int i = len; i > 0; i--) {
		bool temp = (len - i - 2) * (i - 2) == yellow ? true : false;

		if (temp) {
			answer.push_back(i);
			answer.push_back(len - i);
			break;
		}
	}


	return answer;
}