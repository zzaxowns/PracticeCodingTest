#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location) {
	int answer = 0;
	int len = priorities.size();// 이 크기만큼 체크
	int current_Index = 0;

	while (1) {
		int temp = current_Index + len;

		for (int i = current_Index; i < temp; i++) {
			if (priorities[i] > priorities[current_Index]) {
				current_Index = i % len;
				cout << current_Index << " ";
			}
		}

		if (current_Index == location) {
			answer++;
			break;
		}
		else {
			answer++;
			priorities[current_Index] = 0;
		}
	}

	return answer;
}