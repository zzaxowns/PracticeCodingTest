#include <string>
#include <vector>
#include <iostream>
#include <set>
using namespace std;

int solution(string numbers) {
	int answer = 0;
	//vector<int> v; 
	set<int> table;
	bool check_arr[10000000] = { 0, };

	int len = numbers.length();
	for (int i = 0; i < len; i++) {
		table.insert(numbers[i] - '0');
	}


	for (int i = 2; i < 10000000; i++) {
		if (check_arr[i] == 0) {
			for (int j = 2; j*i < 10000000; j++) {
				check_arr[j*i] = 1;
			}
		}
	}



	return answer;
}