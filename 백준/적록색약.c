#include<iostream>
#include<queue>
#define MAX  5

using namespace std;

int dx[4] = { 0,0,-1,1 };
int dy[4] = { -1,1,0,0 };

char paint[5][5] = { {'R','R','R','B','B'},
					 {'G','G','B','B','B'},
					 {'B','B','B','R','R'},
					 {'B','B','R','R','R'},
					 {'R','R','R','R','R'} };

bool check[5][5] = { 0, };

void dfs(int x, int y) {
	check[x][y] = true;

	for (int i = 0; i < 4; i++) {
		int temp_x = x + dx[i];
		int temp_y = y + dy[i];

		if (temp_x < 0 || temp_x >= MAX || temp_y < 0 || temp_y >= MAX) { continue; }

		if (!check[temp_x][temp_y] && paint[x][y] == paint[temp_x][temp_y]) {
			dfs(temp_x, temp_y);
		}
	}
}

void change_Paint() {
	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			if (paint[i][j] == 'G') { paint[i][j] = 'R'; }
		}
	}
}

void check_Reset() {
	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			check[i][j] = false;
		}
	}
}

int main() {
	int count = 0;

	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			if (!check[i][j]) {
				dfs(i, j);
				count++;
			}
		}
	}

	cout << "일반인이 봤을 경우 정답: " << count << endl;

	change_Paint();
	check_Reset();
	count = 0;

	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			if (!check[i][j]) {
				dfs(i, j);
				count++;
			}
		}
	}

	cout << "적록색약을 갖고 있는 사람이 봤을 경우 정답: " << count << endl;

	return 0;
}