#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
	int answer = 0;
	vector<int> s;

	for (int i = 0; i < moves.size(); i++) {
		int temp = 0;

		for (int j = 0; j < board.size(); j++) {
			if (board[moves[i]][j] != 0) {
				temp = board[moves[i]][j];
				board[moves[i]][j] = 0;
				break;
			}
		}

		if (s.empty()) {
			s.push_back(temp);
		}
		else {
			int back = s.back();

			if (back == temp) {
				answer++;
				s.pop_back();
			}
			else {
				s.push_back(temp);
			}
		}
	}



	return answer;
}