#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
	int answer = 0;
	priority_queue<int, vector<int>, greater<int>> min_Heap;

	for (auto& food : scoville) { min_Heap.push(food); }

	while (1) {
		int first = min_Heap.top();
		min_Heap.pop();

		if (first >= K) { break; }
		else if (min_Heap.empty()) {
			answer = -1;
			break;
		}
		else {
			int second = min_Heap.top();
			min_Heap.pop();
			min_Heap.push(first + 2 * second);
			answer++;
		}
	}

	return answer;
}