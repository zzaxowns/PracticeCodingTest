#include <string>
#include <vector>

using namespace std;

int solution(int n) {
	int answer = 0;

<<<<<<< HEAD
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
=======

>>>>>>> b08bd1abd612a0d9fa4624cc494d8d28f786ffb7

	return answer;
}