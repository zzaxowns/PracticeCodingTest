#include<iostream>

#define MAX 128

using namespace std;

int Map[MAX][MAX];
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

	int check = Map[x][y]; //0�� �Ͼ��, 1�� �Ķ���,2 ����

	for (int i = x; i < x + size; i++) {
		for (int j = y; j < y + size; j++) {
			if (check != Map[i][j])
				check = 2;
		}
	}

	if (check == 2) {
		Divide(x, y, size / 2);
		Divide(x, y + size / 2, size / 2);
		Divide(x + size / 2, y, size / 2);
		Divide(x + size / 2, y + size / 2, size / 2);
	}


	if (check == 0)
		White++;
	else if(check == 1)
		Blue++;

	return;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	GetMap();
	Divide(0, 0, Size);

	cout << White << endl << Blue << endl;

	return 0;
}