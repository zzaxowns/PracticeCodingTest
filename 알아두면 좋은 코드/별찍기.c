#include<iostream>

using namespace std;

void making_Star(int num) {

	cout << "왼쪽에 붙은 친구" << endl;

	for (int i = 0; i < num; i++) {
		for (int j = 0; j <= i; j++) {
			cout << '*';
		}
		cout << endl;
	}

	cout << "오른쪽에 붙은 친구" << endl;

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (num - 1 - i > j) {
				cout << " ";
			}
			else {
				cout << '*';
			}
		}
		cout << endl;
	}

	cout << "가운대부터 만들어지는 친구" << endl;

	for (int i = 0; i < num; i++) {
		if (i & 1 == 1) continue;

		for (int j = 0; j < (num - i) / 2; j++) {
			cout << " ";
		}

		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}


	cout << "역삼각형" << endl;

	for (int i = num; i > 0; i--) {
		if (!(i & 1 == 1)) continue;

		for (int j = 0; j < (num - i) / 2; j++) {
			cout << " ";
		}

		for (int j = 0; j < i; j++) {
			cout << "*";
		}

		cout << endl;
	}
}

int main() {

	making_Star(9);

	return 0;
}