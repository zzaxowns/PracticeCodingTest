#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> board)
{
	int answer = 0;
	int height = board.size() - 1;
	int width = board[0].size() - 1;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (board[i][j]) {
				board[i + 1][j + 1] = 1 + min({ board[i][j],board[i + 1][j], board[i][j + 1] });
				answer = max(answer, board[i + 1][j + 1]);
			}
		}
	}

	return answer * answer;
}