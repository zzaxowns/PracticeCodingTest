#include<iostream>
#include<vector>

using namespace std;

int graphs[7][7] = { {1,1,1,1,1,1,1},
					{1,2,2,2,2,2,1},
					{1,2,3,3,3,2,1},
					{1,2,3,4,3,2,2},
					{1,2,3,3,3,2,1},
					{1,2,2,2,2,2,1},
					{1,1,1,1,1,1,1} };

int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

void dfs(int x, int y, int n, int size) {
	int target = n;
	graphs[x][y] = 0;

	for (int i = 0; i < 4; i++) {
		int temp_x = x + dx[i];
		int temp_y = y + dy[i];

		if (temp_x >= 0 && temp_x < size && temp_y >= 0 && temp_y < size && graphs[temp_x][temp_y] == target) {
			dfs(temp_x, temp_y, target, size);
		}
	}

	return;
}

void print_G(int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << graphs[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {

	dfs(3, 6, graphs[3][6], 7);
	print_G(7);

	return 0;
}

