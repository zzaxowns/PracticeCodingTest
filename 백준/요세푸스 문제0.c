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
		// k��° �� ���ϱ�
		for (int i = 0; i < k - 1; i++) {
			deq.push_back(deq.front());
			deq.pop_front();
		}

		// ����ϱ�
		if (deq.size() == 1) { cout << deq.front(); }
		else { cout << deq.front() << ", "; }

		// ����� ���� �����
		deq.pop_front();
	}

	cout << ">";
	return 0;
}