#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
	vector<int> answer;
	int len = prices.size();

	for (int i = 0; i < len; i++) {
		int count = 1;
		int temp = prices[i];
		for (int j = i + 1; j < len-1; j++) {
			if (temp < prices[j]) {
				count++;
				temp = prices[j];
			}
			else if (temp > prices[j]) {
				count++;
				break;
			}
		}

		answer.push_back(count);
	}


	return answer;
}
//문제가 너무 애매

#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> prices) {
	vector<int> answer;
	stack<int> s;

	answer.push_front(0);

	int len = prices.size() - 1;

	for (int i = 0; i < len; i++) {


	}

	return answer;
}