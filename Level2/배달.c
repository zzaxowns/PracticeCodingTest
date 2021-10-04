#include <iostream>
#include <vector>
using namespace std;

int solution(int N, vector<vector<int> > road, int K) {
	int answer = 0;
	vector<int> v(999999, N);
	int len = road.size();

	for (int i = 1; i < len; i++) {
		int temp = road[i][0] < road[i][1] ? road[i][0] : road[i][1];


	}

	return answer;
}