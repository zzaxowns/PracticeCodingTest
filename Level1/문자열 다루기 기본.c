#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
	bool answer = true;
	for (auto ch : s) {
		if (!isdigit(ch)) {
			answer = false;
			break;
		}
	}

	return s.size() == 4 || s.size() == 6 ? answer : false;
}