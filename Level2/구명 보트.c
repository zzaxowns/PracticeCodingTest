#include <string>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

int solution(vector<int> people, int limit) {
	int answer = 0;
	deque<int> deq;

	sort(people.begin(), people.end());

	for (auto num : people) {
		deq.push_back(num);
	}

	while (true) {

		if (deq.size() == 0) {
			break;
		}
		else if (deq.size() == 1) {
			answer++;
			break;
		}
		else {
			int boat = deq.back();

			bool check = boat + deq.front() > limit ? false : true;

			if (check) {
				deq.pop_front();
				deq.pop_back();
				answer++;
			}
			else {
				deq.pop_back();
				answer++;
			}
		}
	}

	return answer;
}