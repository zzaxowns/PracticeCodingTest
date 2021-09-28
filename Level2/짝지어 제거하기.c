#include <iostream>
#include <string>
#include <stack>

using namespace std;

int solution(string s)
{
	int answer = -1;
	stack<char> check;

	for (int i = 0; i < s.size(); i++) {
		if (check.empty())
			check.push(s[i]);
		else {
			char temp = check.top();

			temp == s[i] ? check.pop() : check.push(s[i]);
		}
	}

	return check.empty() == true ? 1 : 0;
}