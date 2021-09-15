#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
	bool answer = true;
	int len = s.size();

	if (!(len == 4 || len == 6)) {
		answer = false;
	}
	else {

		printf("길이가 4 또는 6");
		for (auto ch : s) {
			if (ch - '0' > 9 || ch - '0' < 0) {
				answer = false;
				break;
			}
		}
	}

	return answer;
}