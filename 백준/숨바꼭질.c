#include<iostream>
#include<stack>
#include<queue>

using namespace std;

#define MAX 100001

int DFS(vector<bool> check_Arr, int N, int V) {
	stack<int> s;
	int count = 1;

	s.push(N);
	check_Arr[N] = true;

	while (!s.empty()) {
		int current = s.top();

		if (!check_Arr[N - 1]) {
			s.push(N - 1);
			check_Arr[N - 1] = true;
		}
		else if (!check_Arr[N * 2]) {
			s.push(N * 2);
			check_Arr[N * 2] = true;
		}
		else if (!check_Arr[N + 1]) {
			s.push(N + 1);
			check_Arr[N + 1] = true;
		}
		else
	}

}

int BFS() {
}

int main() {
	int N = 0;
	int K = 0;
	vector<bool> check_Arr(MAX, false);

	cout << "�������� ��ġ >>> ";
	cin >> N;

	cout << "������ ��ġ >>> ";
	cin >> K;



	return 0;
}

// q�� pair�� ���� �Ẹ��