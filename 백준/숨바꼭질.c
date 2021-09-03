#include<iostream>
#include<queue>
#include<algorithm>
#include<utility>

using namespace std;

#define MAX 100001

bool Isvaild(int num, const vector<bool> check) {
	if (num <= 100000 && num > 0 && !check[num])
		return true;
	else
		return false;
}

int Search(vector<bool> check_Arr, int N, int K) {
	queue<pair<int, int>> q;
	int answer = -1;

	q.push({ N,0 });
	check_Arr[N] = true;


	while (!q.empty()) {
		pair<int, int> temp = q.front();

		if (temp.first == K) { // ���� �� �տ� �ִ°� ����
			answer = temp.second;
			break;
		}

		if (Isvaild(temp.first - 1, check_Arr)) {
			q.push({ temp.first - 1, temp.second + 1 });
			check_Arr[temp.first - 1] = true;
		}

		if (Isvaild(temp.first + 1, check_Arr)) {
			q.push({ temp.first + 1, temp.second + 1 });
			check_Arr[temp.first + 1] = true;
		}

		if (Isvaild(temp.first * 2, check_Arr)) {
			q.push({ temp.first * 2, temp.second + 1 });
			check_Arr[temp.first * 2] = true;
		}

		q.pop();
	}

	return answer;
}


int main() {
	int N = 0;
	int K = 0;
	vector<bool> check_Arr(MAX, false);

	cout << "�������� ��ġ >>> ";
	cin >> N;

	cout << "������ ��ġ >>> ";
	cin >> K;

	cout << Search(check_Arr, N, K) << endl;

	return 0;
}