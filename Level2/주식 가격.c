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
	vector<int> answer(prices.size());
	stack<int> s;
	int len = prices.size();

	for (int i = 0; i < len; i++) {
		while (!s.empty() && prices[s.top()] > prices[i]) {
			answer[s.top()] = i - s.top();
			s.pop();
		}

		s.push(i);
	}

	while (!s.empty()) {
		answer[s.top()] = len - 1 - s.top();
		s.pop();
	}

	return answer;
}