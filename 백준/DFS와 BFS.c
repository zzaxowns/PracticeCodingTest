#include<iostream>
#include<vector>

using namespace std;

int main() {
	int N = 0;
	int M = 0;

	cin >> N;
	if (N > 1000 || N < 0) { return 0; }

	cin >> M;
	if (M < 0 || M>10000) { return 0; }

	vector<vector<int>> g;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			g[i].push_back(0);
		}
	}

	for (int i = 0; i < M; i++) {
		int node1 = 0;
		int node2 = 0;

		cin >> node1 >> node2;
		g[node1][node2] = 1;
	}


	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cout << " " << g[i][j];
		}
		cout << endl;
	}



	return 0;
}