#include <iostream>
#include <queue>

using namespace std;

int main() {
	deque<int> deq;
	int n; cin >> n;
	int k; cin >> k;

	for (int i = 1; i <= n; i++) { deq.push_back(i); }
	cout << "<";

	while (!deq.empty()) {
		// k번째 수 구하기
		for (int i = 0; i < k - 1; i++) {
			deq.push_back(deq.front());
			deq.pop_front();
		}

		// 출력하기
		if (deq.size() == 1) { cout << deq.front(); }
		else { cout << deq.front() << ", "; }

		// 출력한 숫자 지우기
		deq.pop_front();
	}

	cout << ">";
	return 0;
}