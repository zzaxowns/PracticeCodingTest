#include <string>
#include <vector>

using namespace std;

int solution(vector<int> priorities, int location) {
	int answer = 0;
	int len = priorities.size();
	int current_Index = 0;

	while (1) {
		int temp = current_Index + len;

		for (int i = current_Index; i < temp; i++) {// 현재 저장된 index에서 벡터의 길이 만큼 체크
			if (priorities[i%len] > priorities[current_Index]) {
				current_Index = i % len;
			}
		}

		if (current_Index == location) { //탈출 조건
			answer++;
			break;
		}
		else {                         //탈출 조건이 안맞으면 현재 가장 큰 값을 0으로 만들고 반복
			answer++;
			priorities[current_Index] = 0;
		}

	}

	return answer;
}