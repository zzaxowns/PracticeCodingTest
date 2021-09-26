#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
	int num = x;
	int sum = 0;

	while (num != 0) {
		sum += num % 10;
		num /= 10;
	}


	return x % sum == 0 ? true : false;
}