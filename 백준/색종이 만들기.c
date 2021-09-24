#include<iostream>

#define MAX 128

using namespace std;

int Map[MAX][MAX] = { 0, };
int Size, White, Blue;

void GetMap() {
	cin >> Size;

	for (int i = 0; i < Size; i++) {
		for (int j = 0; j < Size; j++) {
			cin >> Map[i][j];
		}
	}
}
void Divide(int x, int y, int size) {
	bool isWhite = false;

	for (int i = x; i < x + size; i++) {
		for (int j = y; j < y + size; j++) {
			isWhite = Map[i][j] == 0 ? true : false;
		}
	}

	if (isWhite)White++;
	else if (!isWhite) Blue++;

	Divide(x, y, size / 2);
	Divide(x, y + size, size / 2);
	Divide(x + size, y, size / 2);
	Divide(x + size, y + size, size / 2);
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);


	GetMap();
	Divide(0, 0, Size);


	return 0;
}