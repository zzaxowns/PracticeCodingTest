#include<iostream>
#include<queue>
#include<algorithm>
#include<utility>

using namespace std;

#define MAX 100001

bool Isvaild(int num) {
	bool temp = num <= 100000 && num > 0 ? true : false;

	temp = temp || num

		return
}

int Search(vector<bool> check_Arr, int N, int V) {
	queue<pair<int, int>> q;
	q.push({ N,0 });
	check_Arr[N] = true;

	while (!q.empty()) {
		pair<int, int> temp = q.front();

		if (temp.first == N) { // 현재 맨 앞에 있는게 정답
			return temp.second;
		}

		if (Isvaild(temp.first - 1)) {
			q.push({ temp.first - 1, temp.second + 1 });
			check_Arr[temp.first - 1] = true;
		}

		if (Isvaild(temp.first + 1)) {
			q.push({ temp.first + 1, temp.second + 1 });
			check_Arr[temp.first + 1] = true;
		}

		if (Isvaild(temp.first * 2)) {
			q.push({ temp.first * 2, temp.second + 1 });
			check_Arr[temp.first * 2] = true;
		}

	}

	return
}


int main() {
	int N = 0;
	int K = 0;
	vector<bool> check_Arr(MAX, false);

	cout << "수빈이의 위치 >>> ";
	cin >> N;

	cout << "동생의 위치 >>> ";
	cin >> K;



	return 0;
}