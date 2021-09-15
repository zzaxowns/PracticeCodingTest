#include <string>
#include <vector>

using namespace std;

string solution(int n) {
	string answer = "¼ö";

	for (int i = 1; i < n; i++) {
		bool even = i % 2 == 0 ? true : false;

		if (even)
			answer += "¼ö";
		else
			answer += "¹Ú";
	}


	return answer;
}