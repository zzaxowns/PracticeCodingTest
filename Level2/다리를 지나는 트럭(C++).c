#include <string>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
	int answer = 0;
	stack<int> wait;
	queue<int> buffer;
	int len = truck_weights.size();
	int current_weight = 0;

	for (int i = len; i >= 0; i--) {
		wait.push(truck_weights[i]);
	}

	while (!(buffer.empty() && wait.empty())) {

		if ((current_weight + wait.top() < weight) // 새로운 트럭이 들어갈 수 있을 때
			|| buffer.size() < bridge_length) {
			current_weight += wait.top();
			buffer.push(wait.top());

			wait.pop();
		}
		else { // 새로운 트럭이 들어갈 수 없을 때 0을 추가해서 큐를 밀어준다.
			if (current_weight != 0) {
				buffer.push(0);

				if (buffer.size() > bridge_length) {// 앞에 트럭이 밀려서 지나감
					int temp = buffer.front();
					current_weight -= temp;
					buffer.pop();
				}
			}
		}

		answer++;

	}

	return answer;
}