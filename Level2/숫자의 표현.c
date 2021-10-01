#include <string>
#include <vector>

using namespace std;

int solution(int n) {
	int answer = 0;

	answer++;

	for (int i = n / 2 + 1; i > 0; i--) {
		int sum = 0;
		for (int j = i; j > 0; j--) {
			sum += j;

			if (sum >= n)
				break;
		}

		if (sum == n) { answer++; }
	}

	return answer;
}