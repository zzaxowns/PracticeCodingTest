#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, vector<vector<int>> costs) {
	int answer = 0;
	int count = 0;
	vector<bool> check(n, false);

	for (int j = 0; j < n - 1; j++) {
		int min_weight = 0;

		for (int i = 0; i < n; i++) {
			if ((!check[costs[i][0]] && check[costs[i][1]])
				&& costs[i][2] < costs[min_weight][2]) {
				min_weight = i;

			}
		}

		for (auto ch : check) {
			cout << ch << " ";
		}
		cout << endl;
		answer += costs[min_weight][2];
		check[costs[min_weight][0]] = true;
		check[costs[min_weight][1]] = true;
	}

	return answer;
}