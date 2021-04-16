#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
	vector<int> answer;
	int current = 0;
	int count = 0;
	int len = progresses.size();

	while (current < len) {
		count = 0;

		for (int i = current; i < len; i++) {
			progresses[i] += speeds[i];
		}

		for (int i = current; i < len; i++) {
			if (progresses[i] >= 100) {
				current++;
				count++;
			}
			else {
				break;
			}
		}

		if (count != 0) {
			answer.push_back(count);
		}
	}


	return answer;
}