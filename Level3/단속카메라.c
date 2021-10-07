#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> routes) {
	int answer = 1;
	int current = 0;

	sort(routes.begin(), routes.end());
	current = routes[0][1];

	for (auto nums : routes) {
		if (current < nums[0]) {
			answer++;
			current = nums[1];
			continue;
		}

		if (current >= nums[1])
			current = nums[1];

	}

	return answer;
}