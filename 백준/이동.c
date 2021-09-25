#include <iostream>
#include <deque>

using namespace std;

int Size;
vector<int> arr1;
deque<int> arr2;

void input() {
	cin >> Size;

	for (int i = 0; i < Size; i++) {
		int temp = 0;
		cin >> temp;
		arr1.push_back(temp);
	}

	for (int i = 0; i < Size; i++) {
		int temp = 0;
		cin >> temp;
		arr2.push(temp);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	input()


		return 0;
}