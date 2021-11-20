#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
	unordered_map<int, vector<int>> table;

	table[0] = { 0, 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,0 };
	table[5] = { 5, 20,21,23,24,15,16,17,18,19,0 };
	table[10] = { 10, 25,26,22,27,28,0 };
	table[15] = { 15,16,17,18,19,0 };
	table[22] = { 22,27,28,0 };


	return 0;
}