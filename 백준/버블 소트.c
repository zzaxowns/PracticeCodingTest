#include<iostream>
#include<vector>

using namespace std;
int Size, answer;
vector<int> arr;

void Input() {
	cin >> Size;

	for (int i = 0; i < Size; i++) {
		int temp = 0;
		cin >> temp;
		arr.push_back(temp);
	}
}

void bubble() {
	for (int i = 0; i < Size; i++) {
		for (int j = 0; j < Size - 1; j++) {
			if (arr[j + 1] < arr[j]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmep;
				answer++;
			}
		}
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Input();
	bubble();

	cout << answer << endl;

	return 0;
}