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

	int check = Map[x][y]; //0¹ø ÇÏ¾á»ö, 1¹ø ÆÄ¶û»ö,2 ºÐÇÒ

	for (int i = x; i < x + size; i++) {
		for (int j = y; j < y + size; j++) {
			if (check != Map[i][j])
				check = 2;
		}
	}

	if (check == 2) {
		Divide(x, y, size / 2);
		Divide(x, y + size, size / 2);
		Divide(x + size, y, size / 2);
		Divide(x + size, y + size, size / 2);
	}


	if (check == 0)
		White++;
	else
		Blue++;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	GetMap();
	Divide(0, 0, Size);

	cout << White << endl << Blue;

	return 0;
}