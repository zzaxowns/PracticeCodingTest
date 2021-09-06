#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int greedy(vector<int> people) {
	int sum = 0;

	sort(people.begin(), people.end());

	for (auto num : people) {
		sum = sum + num;
	}

	return sum;
}

int main() {
	vector<int> people;
	int N = 0;

	cout << "������� �� >>>";
	cin >> N;

	if (N > 0 && N <= 1000 ? false : true)
		return -1;

	for (int i = 0; i < N; i++) {
		int temp = 0;

		cout << i + 1 << " ��° ����� �ʿ��� �ð� >>>";
		cin >> temp;

		people.push_back(temp);
	}

	cout << "�� �ɸ��� �ð�: " << greedy(people) << "��" << endl;

	return 0;
}