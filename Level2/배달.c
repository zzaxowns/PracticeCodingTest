#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<pair<int, int>> graphs[51];
int dist[51];

void dijkstra(int start) {
	priority_queue<pair<int, int>>pq;

	pq.push({ 0,start });
	dist[start] = 0;

	while (!pq.empty()) {
		int distance = -pq.top().first;
		int now = pq.top().second;

		for (int i = 0; i < graphs[now].size(); i++) {
			int cost = distance + graphs[now][i].second;

			if (cost < dist[graphs[now][i].first]) {
				dist[graphs[now][i].first] = cost;
				pq.push(make_pair(-cost, graphs[now][i].first));
			}
		}
		pq.pop();
	}

}

int solution(int N, vector<vector<int> > road, int K) {
	int answer = 0;

	for (int i = 0; i < road.size(); i++) { // 도착지, 가중치
		graphs[road[i][0]].push_back(make_pair(road[i][1], road[i][2]));
		graphs[road[i][1]].push_back(make_pair(road[i][0], road[i][2]));
	}

	for (int i = 0; i < 51; i++) { dist[i] = 999999; }

	dijkstra(1);

	for (int i = 0; i <= N; i++) {
		if (dist[i] <= K)
			answer++;
	}

	return answer;
}