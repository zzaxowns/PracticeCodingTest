#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<vector<int>> input = { {1,-1},
							{1,-1,3},
							{4,1,3,1},
							{5,3,1,-1,-1},
							{4,4,2,4,-1,-1} };

int main() {
	unordered_map<int, vector<int>> table;

	table[0] = { 0, 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,0 };
	table[5] = { 5, 20,21,22,23,24,15,16,17,18,19,0 };
	table[10] = { 10, 25,26,22,27,28,0 };
	table[15] = { 15,16,17,18,19,0 };
	table[22] = { 22,27,28,0 };

	for (auto input_arr : input) {
		int current_Table = 0;
		int current = 0;
		int cur_Index = 0;
		bool isBack = false;

		for (auto num : input_arr) { //{4,4,2,4,-1,-1}
			if (!table[current].empty() && current != current_Table) {
				if (!isBack) {
					cur_Index = 0;
					current_Table = current;
				}
				else {
					isBack = !isBack;
				}
			}

			isBack = num == -1 ? true : false;
			cur_Index += num;
			current = table[current_Table][cur_Index];
			cout << "테이블: " << current_Table << " 인덱스: " << cur_Index << " 위치: " << current << endl;
		}
		cout << "==================" << endl;
	}

	return 0;
}