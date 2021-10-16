#include <iostream>
#include <stack>
#include <string>

using namespace std;

int carculator(int n1, int n2, char op) {
	int num = 0;

	switch(op) {
		case '/':
			if(n2 != 0)
				num = n1 / n2;
			break;
		case '*':
			num = n1 * n2;
			break;
		case '+':
			num = n1 + n2;
			break;
		case '-':
			num = n1 - n2;
			break;
		default:
	}

	return num;
}

void Input(stack<int> s) {
	string input = "";

	cin >> input;

}

int main() {
	stack<int> s;





	return 0;
}