#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
	bool answer = true;
	int check_Num = 0;
	int len = s.size();

	for (int i = 0; i < len; i++) {
		if (s[i] == 'p' || s[i] == 'P') {
			check_Num++;
		}
		else if (s[i] == 'y' || s[i] == 'Y') {
			check_Num--;
		}

	}

	answer = check_Num == 0 ? true : false;

	return answer;
}