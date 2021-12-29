#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;

int arr[1000001];
int answer[1000001];

int main() {

	stack<int> s;
	int N;	cin >> N; //선언 + 입력

	for (int i = 0; i < N; i++) { cin >> arr[i]; }

	for (int i = N - 1; i >= 0; i--) {
		while (!s.empty() && s.top() <= arr[i])
			s.pop();

		answer[i] = s.empty() ? -1 : s.top();

		s.push(arr[i]);
	}

	for (int i = 0; i < N; i++) { cout << answer[i] << " "; }

	return 0;
}