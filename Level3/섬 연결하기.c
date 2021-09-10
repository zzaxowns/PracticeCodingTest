#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int find_parent(int n, const int* arr) { // 부모 노드 찾기
	return n == arr[n] ? n : find_parent(arr[n], arr);
}

bool check_parent(int n1, int n2, const int* arr) { // 부모노드가 같은지 확인
	int node1 = find_parent(n1, arr);
	int node2 = find_parent(n2, arr);

	return node1 == node2 ? true : false;
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
		int start = costs[i][0];
		int end = costs[i][1];

		if (!check_parent(start, end, check_arr)) {
			answer += costs[i][2];
			check_arr[end] = start;
		}

	}

	return answer;
}