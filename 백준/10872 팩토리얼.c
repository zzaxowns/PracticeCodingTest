#include<iostream>

using namespace std;

int  fact(int n) {
	return n == 0 ? 1 : n * fact(n - 1);
}

int main() {
	int N; cin >> N;

	cout << fact(N);

	return 0;
}