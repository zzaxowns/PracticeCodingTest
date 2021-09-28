#include<vector>
#include<queue>

using namespace std;

int width, height;

int dY[4] = { -1, 1, 0, 0 };
int dX[4] = { 0, 0, -1, 1 };

struct Pos {
	int x;
	int y;
	int dist;
};

int solution(vector<vector<int> > maps)
{
	int answer = 0;
	width = maps.size();
	height = maps[0].size();

	queue<Pos> Info;
	Info.push({ 0,0,1 });
	maps[0][0] = 0;

	while (!Info.empty()) {
		Pos temp = Info.front();

		if (temp.x == width - 1 && temp.y == height - 1) {
			answer = temp.dist;
			break;
		}

		for (int i = 0; i < 4; i++) {
			int dx = temp.x + dX[i];
			int dy = temp.y + dY[i];

			if (dx < 0 || dx >= width || dy < 0 || dy >= height)
				continue;

			if (maps[dx][dy] == 1) {
				Info.push({ dx, dy, temp.dist + 1 });
				maps[dx][dy] = 0;
			}
		}

		Info.pop();
	}

	return answer == 0 ? -1 : answer;
}