#include<iostream>

using namespace std;

int main() {
	int num;

	cin >> num;

	if (num % 4 == 0 && (num % 100 != 0 || num % 400 == 0))
		cout << 1;
	else
		cout << 0;

	return 0;
}