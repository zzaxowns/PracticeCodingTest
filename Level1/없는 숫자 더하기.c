#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
	int answer = 0;
	int temp[10] = { 0, };

	for (auto& num : numbers) {
		temp[num]++;
	}

	for (int i = 0; i < 10; i++) {
		if (!temp[i]) {
			answer += i;
		}
	}

	return answer;
}