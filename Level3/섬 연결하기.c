#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>

#define MAX 99999999

using namespace std;

int solution(int n, vector<vector<int>> costs) {
	int answer = 0;
	int count = 0;
	unordered_map<int, bool> check;

	for (int i = 0; i < costs.size(); i++) {
		check[costs[i][0]] = false;
		check[costs[i][1]] = false;
	}

	while (1) {
		int min = 0;

		for (int i = 0; i < costs.size(); i++) {
			if (costs[i][2] < costs[min][2]) {
				min = i;
			}
		}

		bool temp = check[costs[min][0]] && check[costs[min][1]] ? true : false;

		if (temp) {
			costs[min][2] = MAX;
		}
		else {
			answer += costs[min][2];
			check[costs[min][0]] = true;
			check[costs[min][1]] = true;
			costs[min][2] = MAX;
		}

		temp = true;

		for (auto ch : check) {
			if (!ch.second) {
				temp = ch.second;
				break;
			}
		}

		if (temp) { break; }
	}

	return answer;
}