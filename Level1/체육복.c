#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
	int lost_Num = 0;
	unordered_map<int, int> table;

	for (auto& num : lost) { table[num]--; }

	for (auto& num : reserve) {
		if (table[num - 1] == -1) {
			table[num - 1]++;
		}
		else if (table[num + 1] == -1) {
			table[num + 1]++;
		}
	}

	for (auto& num : table) {
		if (num.second == -1) {
			lost_Num++;
		}
	}

	return n - lost_Num;
}