#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>

using namespace std;

void DFS(vector<vector<int>> graph, vector<bool> check, int start_Node, int size) {
	stack<int> s;
	vector<int> print;

	int current_Node = start_Node - 1;
	s.push(current_Node);
	check[current_Node] = true;

	while (!s.empty()) {
		current_Node = s.top();

		for (int i = 0; i < size; i++) {
			if (graph[current_Node][i] == 1 && !check[i]) {
				current_Node = i;
				check[current_Node] = true;
				s.push(i);
				break;
			}
			else if (i == size - 1) {
				print.push_back(s.top());
				s.pop();
			}
		}

	}

	reverse(print.begin(), print.end());

	for (auto node : print) {
		cout << node + 1 << " ";
	}
	cout << endl;
}

void BFS(vector<vector<int>> graph, vector<bool> check, int start_Node, int size) {
	queue<int> q;
	vector<int> print;
	int current_Node = start_Node - 1;
	q.push(current_Node);
	check[current_Node] = true;

	while (!q.empty()) {
		current_Node = q.front();

		for (int i = 0; i < size; i++) {
			if (graph[current_Node][i] == 1 && !check[i]) {
				q.push(i);
				check[i] = true;
			}
		}

		print.push_back(q.front());
		q.pop();
	}

	for (auto node : print) {
		cout << node + 1 << " ";
	}
	cout << endl;
}

void printGraph(vector<vector<int>> graph, int size) {

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << " " << graph[i][j];
		}
		cout << endl;
	}
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

		cout << "시작노드 >>>";
		cin >> node1;
		cout << "끝 노드 >>>";
		cin >> node2;

		g[node1 - 1][node2 - 1] = 1;
		g[node2 - 1][node1 - 1] = 1;
	}

	DFS(g, check_Graph, V, N);

	BFS(g, check_Graph, V, N);

	return 0;
}