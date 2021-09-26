#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
	vector<int> answer;
	int big = n > m ? n : m;
	int small = n > m ? m : n;
	int gcd = 0;

	while (1) {
		if (big %small == 0) {
			gcd = small;
			break;
		}
		else {
			int temp = big % small;
			big = small;
			small = temp;
		}
	}

	answer.push_back(gcd);
	answer.push_back(n*m / gcd);

	return answer;
}