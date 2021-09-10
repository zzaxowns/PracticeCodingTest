#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int find_parent(int n, const int* arr) { // 부모 노드 찾기
	return n == arr[n] ? n : find_parent(arr[n], arr);
}

bool comp(vector<int> n1, vector<int> n2) {
	return n1[2] < n2[2];
}

int solution(int n, vector<vector<int>> costs) {
	int answer = 0;
	int check_arr[101];

	for (int i = 0; i < 101; i++) { check_arr[i] = i; }

	sort(costs.begin(), costs.end(), comp);

	for (int i = 0; i < costs.size(); i++) {
		int start = find_parent(costs[i][0], check_arr);
		int end = find_parent(costs[i][1], check_arr);

		if (start != end) {
			answer += costs[i][2];
			cout << costs[i][2] << " ";
			check_arr[end] = start;
		}

	}

	return answer;
}