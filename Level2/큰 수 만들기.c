#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
	string answer = "";
	int current = 0;

	for (int i = 0; i < number.size() - k; i++) {

		for (int j = current; j <= i + k; j++) {
			if (number[current] < number[j]) {
				current = j;
			}
		}

		answer += number[current];
		current += 1;
	}

	return answer;
}