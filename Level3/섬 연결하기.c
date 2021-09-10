#include <string>
#include <vector>
#include <algorithm>
#include<iostream>
#include <unordered_map>

#define MAX 99999999

using namespace std;

bool comp(vector<int> n1, vector<int> n2) {
	return n1[2] < n2[2];
}

int solution(int n, vector<vector<int>> costs) {
	int answer = 0;
	int count = 0;
	unordered_map<int, bool> check;

	sort(costs.begin(), costs.end(), comp);

	for (auto cases : costs) { // 방문 노드 초기화 
		check[cases[0]] = false;
		check[cases[1]] = false;
	}

	for (int i = 0; i < costs.size(); i++) {
		int temp = check[costs[i][0]] & check[costs[i][1]];

		if (!temp) {
			answer += costs[i][2];
			check[costs[i][0]] = true;
			check[costs[i][1]] = true;
		}
	}

	return answer;
}