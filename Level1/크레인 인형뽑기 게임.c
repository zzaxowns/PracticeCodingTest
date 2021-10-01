#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
	int answer = 0;
	vector<int> check(1, 0);
	stack<int> s[board.size()];

	for (int i = board.size() - 1; i >= 0; i--) {
		for (int j = 0; j < board.size(); j++) {
			if (board[j][i] != 0) {
				s[j].push(board[j][i]);
			}
		}
	}

	for (int i = 0; i < moves.size(); i++) {
		if (!s[moves[i] - 1].empty()) {
			if (check.back() == s[moves[i] - 1].top()) {
				s[moves[i] - 1].pop();
				check.pop_back();
				answer += 2;
			}
			else {
				check.push_back(s[moves[i] - 1].top());
				s[moves[i] - 1].pop();
			}
		}
	}





	return answer;
}