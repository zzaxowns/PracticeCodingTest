#include <iostream>
#include <vector>
using namespace std;

int solution(int N, vector<vector<int> > road, int K) {
	int answer = 0;
	vector<int> v(N + 1, 999999);
	v[1] = 0;
	int len = road.size();

	for (int i = 0; i < len; i++) {
		int min_Id = v[road[i][0]] < v[road[i][1]] ? road[i][0] : road[i][1];
		int max_Id = v[road[i][0]] > v[road[i][1]] ? road[i][0] : road[i][1];

		v[max_Id] = v[max_Id] > (v[min_Id] + road[i][2]) ? (v[min_Id] + road[i][2]) : v[max_Id];
	}

	for (auto w : v) {
		cout << w << " ";
	}

	for (auto w : v) {
		if (w <= K)
			answer++;
	}

	return answer;
}