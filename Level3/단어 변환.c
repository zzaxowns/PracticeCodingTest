#include <string>
#include <vector>
#include <queue>

using namespace std;

int check_different(string str1, string str2, int len) { // 몇개가 다른지 체크
	int temp = 0;

	for (int i = 0; i < len; i++) {
		if (str1[i] != str2[i])
			temp++;
	}

	return temp;
}

int solution(string begin, string target, vector<string> words) {
	int answer = 0;
	int len = begin.size();
	queue<pair<string, int>> table;
	table.push({ begin,0 });




	return answer;
}