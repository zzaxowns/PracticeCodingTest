#include <string>
#include <vector>

using namespace std;

int answer = 0;

int solution(vector<int> numbers, int target) {

	if (numbers.size() == 0) {
		return  target == 0 ? 1 : 0;
	}

	int num = numbers[0];
	numbers.erase(numbers.begin());

	return solution(numbers, target + num) + solution(numbers, target - num);
}