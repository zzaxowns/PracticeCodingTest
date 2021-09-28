#include<vector>
#include<queue>

using namespace std;

int width, height;

struct Pos {
	int x;
	int y;
	int dist;
};

bool isVaild(int x, int y) {
	if (x >= 0 && x < width && y >= 0 && y < height)
		return true;

	return false;
}

int solution(vector<vector<int> > maps)
{
	int answer = 0;
	width = maps[0].size();
	height = maps.size();

	queue<Pos> Info;
	Info.push({ 0,0,1 });

	while (!Info.empty()) {
		Pos temp = Info.front();

		maps[temp.x][temp.y] = 0;

		if (temp.x == width - 1 && temp.y == height - 1) {
			answer = temp.dist;
			break;
		}//≈ª√‚

		if (maps[temp.x + 1][temp.y] && isVaild(temp.x + 1, temp.y))
			Info.push({ temp.x + 1, temp.y,temp.dist + 1 });

		if (maps[temp.x - 1][temp.y] && isVaild(temp.x - 1, temp.y))
			Info.push({ temp.x - 1, temp.y,temp.dist + 1 });

		if (maps[temp.x][temp.y + 1] && isVaild(temp.x, temp.y + 1))
			Info.push({ temp.x, temp.y + 1,temp.dist + 1 });

		if (maps[temp.x][temp.y - 1] && isVaild(temp.x, temp.y - 1))
			Info.push({ temp.x, temp.y - 1,temp.dist + 1 });

		Info.pop();
	}

	return answer == 0 ? -1 : answer;
}