#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main() {
	stack<char> s;
	string input = "";
	int num = 0;

	cout << "°ýÈ£ Á¶ÇÕ >>.";
	cin >> input;

	for (auto ch : input) { s.push(ch); }

	while (!s.empty()) {
		char temp = s.top();

		temp == ')' ? num++ : num--;

		if (num < 0) {
			break;
		}

		s.pop();
	}

	if (num != 0)
		cout << num << " No" << endl;
	else
		cout << num << " Yes" << endl;


	return 0;
}