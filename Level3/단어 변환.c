#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int check_different(string str1, string str2, int len) { // 몇개가 다른지 체크
	int temp = 0;

	for (int i = 0; i < len; i++)
		if (str1[i] != str2[i])
			temp++;

	return temp;
}

int solution(string begin, string target, vector<string> words) {
	int answer = 0;
	int len = begin.size();
	queue<pair<string, int>> table;
	table.push({ begin,0 });

	while (!table.empty()) {
		pair<string, int> str = table.front();

		if (str.first == target) {
			answer = str.second;
			break;
		}

		table.pop();

		for (int i = 0; i < len; i++) {
			if (check_different(str.first, words[i], len) == 1) {
				table.push({ words[i],str.second + 1 });
				cout << words[i] << str.second << endl;
				words[i] = "===";
			}
		}
	}


	return answer;
}