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
}

int find_Max_Sum() {
	int sum = 0;

	for (int i = 0; i < Size; i++) {
		sum += arr1[j] + arr2[j];
	}



	sum = max(sum, temp);
	return sum;
}

int main() {
	int answer = 0;

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	input();
	answer = find_Max_Sum();

	cout << answer << endl;

	return 0;
}