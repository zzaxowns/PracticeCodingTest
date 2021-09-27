#include<vector>
using namespace std;

int width, height;
int answer = 1;
bool find = false;
bool isVaild(int x, int y) {
	if (x >= 0 && x < width && y >= 0 && y < height) {
		return true;
	}

	return false;
}

void dfs(int x, int y, vector<vector<int> > maps) {
	if (x == width - 1 && y == height - 1) {
		find = true;
		return;
	}
	answer++;

	maps[x][y] = 0;

	if (maps[x][y + 1] && isVaild(x, y + 1)) {
		dfs(x, y + 1, maps);
	}
	else if (maps[x + 1][y] && isVaild(x + 1, y)) {
		dfs(x + 1, y, maps);
	}
	else if (maps[x][y - 1] && isVaild(x, y - 1)) {
		dfs(x, y - 1, maps);
	}
	else if (maps[x - 1][y] && isVaild(x - 1, y)) {
		dfs(x - 1, y, maps);
	}
}

int solution(vector<vector<int> > maps)
{
	width = maps[0].size();
	height = maps.size();

	dfs(0, 0, maps);

	return find == true ? answer : -1;
}