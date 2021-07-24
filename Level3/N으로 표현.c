#include <unordered_set>

using namespace std;

int solution(int N, int number) {
	int answer = -1;
	unordered_set<int> table[8];
	int temp = 0;

	for (int i = 0; i < 8; i++) {
		temp = temp * 10 + N;
		table[i].insert(temp);
	}

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < i; j++) {
			for (auto& num1 : table[j]) {
				for (auto& num2 : table[i - j - 1]) {
					table[i].insert(num1 + num2);
					table[i].insert(num1 - num2);
					table[i].insert(num1 * num2);
					if (num2 != 0) {
						table[i].insert(num1 / num2);
					}

				}
			}
		}

		if (table[i].count(number) > 0) {
			answer = i + 1;
			break;
		}
	}

	return answer;
}