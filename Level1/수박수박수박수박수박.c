#include <string>
#include <vector>

using namespace std;

string solution(int n) {
	string answer = "��";

	for (int i = 1; i < n; i++) {
		bool even = i % 2 == 0 ? true : false;

		if (even)
			answer += "��";
		else
			answer += "��";
	}


	return answer;
}