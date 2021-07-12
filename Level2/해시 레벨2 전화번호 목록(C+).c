#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

bool solution(vector<string> phone_book) {

	int len = phone_book.size();

	sort(phone_book.begin(), phone_book.end());

	for (int i = 0; i < len - 1; i++) {
		int shorter_Len = phone_book[i].size();

		for (int j = i + 1; j < len; j++) {
			if (strncmp(phone_book[i], phone_book[j], shorter_Len)) {
				return false;
			}
		}
	}
	return true;
}