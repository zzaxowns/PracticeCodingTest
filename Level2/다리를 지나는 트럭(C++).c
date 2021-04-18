#include <string>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
	int answer = 0;
	stack<int> wait;   // 대기 차량
	queue<int> buffer; // 다리 공간 버퍼 
	int len = truck_weights.size(); // 스택 초기화 변수
	int current = 0;    //다리에 현재 무게 변수

	for (int i = len - 1; i >= 0; i--) { //대기 차량 초기화 
		wait.push(truck_weights[i]);
	}

	while (!wait.empty()) {

		if (buffer.size() >= bridge_length) { // 다리 공간 버퍼가 오버되면 맨 앞에 차량 빼주기
			current -= buffer.front();
			buffer.pop();
		}

		if (current + wait.top() <= weight) { // 다리에 중량이 초과되지 않으면 대기 차량 보내기
			buffer.push(wait.top());
			current += wait.top();
			wait.pop();
		}
		else { // 중량이 초과될 경우 '0'이라는 가상의 차량으로 버퍼 채우기
			buffer.push(0);
		}

		answer++; // 사이클이 돌 때마다 시간++

		if (wait.empty()) { // 만약에 대기 차량이 없다 = 마지막 차량이 달리기 시작 = 다리의 값만큼 시간 필요 
			answer += bridge_length;
			break;
		}

	}

	return answer;
}