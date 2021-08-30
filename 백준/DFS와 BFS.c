#include<iostream>
#include<vector>

using namespace std;

void DFS(vector<vector<int>> graph, vector<bool> check, int start_Node) {

}

void BFS(vector<vector<int>> graph, vector<bool> check, int start_Node) {

}

int main() {
	int N = 0;
	int M = 0;
	int V = 0;

	cin >> N;
	if (N > 1000 || N < 0) { return 0; }

	cin >> M;
	if (M < 0 || M>10000) { return 0; }

	cin >> V;
	if (V<0 || V>N) { return 0; }

	vector <bool> check_Graph(N, false);
	vector<vector<int>> g(N, vector<int>(N, 0));

	for (int i = 0; i < M; i++) {
		int node1 = 0;
		int node2 = 0;

		cout << "���۳�� >>>";
		cin >> node1;
		cout << "�� ��� >>>";
		cin >> node2;

		g[node1 - 1][node2 - 1] = 1;
		g[node2 - 1][node1 - 1] = 1;
	}

	DFS(g, check_Graph, V);

	BFS(g, check_Graph, V);

	//print ��� �κ�
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << " " << g[i][j];
		}
		cout << endl;
	}



	return 0;
}