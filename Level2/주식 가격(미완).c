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

int check_Stack(stack<int> s, int num, int size) {
	int count = 0;
	int temp = s.top();

	for (int i = 0; i < size; i++) {
		if (temp <= s.top()) {
			count++;
			s.pop();
		}
		else
			break;
	}

	return count;
}

vector<int> solution(vector<int> prices) {
	vector<int> answer;
	stack<int> s;

	int len = prices.size();

	for (int i = len - 1; i >= 0; i++) { s.push_back(prices[i]); }

	for (int i = 0; i < len; i++) {
		answer.push_back(check_Stack(s, i, len));
	}

	return answer;
}