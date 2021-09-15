#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
	string answer = "";

	for (auto ch : s) {
		if (ch == ' ') {
			answer += ' ';
		}
		else {
			int stand = ch > 'Z' ? 'z' : 'Z';
			int temp = ch + n > stand ? ch + n - 26 : ch + n;

			answer += temp;
		}
	}

	return answer;
}