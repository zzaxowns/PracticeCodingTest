#include <string>
#include <vector>

using namespace std;

int solution(string name) {
	int answer = 0;
	int len = name.length();
	int turn = len - 1;

	for (int i = 0; i < len; i++) {
		if (name[i] - 'A' < 14) { answer += name[i] - 'A'; }
		else { answer += 'Z' - name[i] + 1; }

		int temp = i + 1;
		while (temp < len && name[temp] == 'A') { temp++; }

		turn = min(turn, i + len - temp + min(i, len - temp));
	}

	answer += turn;
	return answer;
}