#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, vector<vector<int>> costs) {
	int answer = 0;
	int count = 0;
	vector<bool> check(n, false);

	for (int j = 0; j < n - 1; j++) {
		int min = 0;

		for (int i = 0; i < costs.size(); i++) {
			bool temp = check[costs[i][0]] && check[costs[i][1]] ? false : true;

			if (temp && (costs[i][2] <= costs[min][2])) {
				min = i;
			}
		}


		answer += costs[min][2];
		costs[min][2] = 9999;
		check[costs[min][0]] = true;
		check[costs[min][1]] = true;
	}

	return answer;
}