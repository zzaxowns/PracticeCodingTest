#include<vector>
using namespace std;

bool isVaild(int x, int y, int max) {
	return 0 <= x && x < max && 0 <= y && y < max ? true : false;
}

int dfs(int x, int y, vector<vector<int>> maps, int answer) {
	maps[x][y] = 0;

	if (x == maps.size() - 1 && y == maps.size() - 1) {
		return answer;
	}

	if (maps[x][y + 1] == 1 && isVaild(x, y + 1, maps.size())) {
		dfs(x, y + 1, maps, answer);
		answer++;
	}
	if (maps[x + 1][y] == 1 && isVaild(x + 1, y, maps.size())) {
		dfs(x + 1, y, maps, answer);
		answer++;
	}
	if (maps[x][y - 1] == 1 && isVaild(x, y - 1, maps.size())) {
		dfs(x, y - 1, maps, answer);
		answer++;
	}
	if (maps[x - 1][y] == 1 && isVaild(x - 1, y, maps.size())) {
		dfs(x - 1, y, maps, answer);
		answer++;
	}

	return -1;
}

int solution(vector<vector<int> > maps)
{
	int answer = 0;

	answer = dfs(0, 0, maps, answer);

	return answer;
}