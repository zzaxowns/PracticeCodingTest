#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

bool solution(vector<string> phone_book) {
	bool answer = true;

	sort(phone_book.begin(), phone_book.end());

	int len = phone_book.size();
	for (int i = 0; i < len; i++) {
		for (int j = i + 1; j < len; j++) {
			if (strncmp(phone_book[i].c_str(), phone_book[j].c_str(), phone_book[i].length()) == 0) {
				return false;
			}
		}
	}

	return answer;
}
