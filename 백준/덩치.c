#include<iostream>
#include<utility>
using namespace std;

int main() {
	int num = 0;
	int rank = 1;
	pair<int, int> table[50];

	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> table[i].first >> table[i].second;
	}

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {

			if (table[i].first < table[j].first && table[i].second < table[j].second) {
				rank++;
			}
		}

		cout << rank << ' ';
		rank = 1;
	}


	return 0;
}