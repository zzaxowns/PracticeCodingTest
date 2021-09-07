#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string name) {
	int answer = 0;
	vector<char> temp;

	for (int i = name.length() - 1; i >= 0; i--) { temp.push_back(name[i]); }

	for (auto ch : temp) {
		cout << ch << " ";
	}

	cout << endl;

	for (auto alpha : temp) {
		if (alpha < 78)
			answer += alpha - 'A';
		else
			answer += 'Z' - alpha + 2;
	}

	return answer;
}