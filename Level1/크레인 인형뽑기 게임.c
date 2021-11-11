#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
	int answer = 0;
	stack<int> result;
	int len = moves.size();
	int size = board.size();

	result.push(0);

	for (int i = 0; i < len; i++) {
		int line = moves[i] - 1;

		for (int j = 0; j < size; j++) { // 크레인이 뽑는 경우
			if (board[j][line] != 0) {
				if (board[j][line] == result.top()) {
					result.pop();
					answer += 2;
				}
				else {
					result.push(board[j][line]);
				}
				board[j][line] = 0;
				break;
			}
		}
	}
	return answer;
}