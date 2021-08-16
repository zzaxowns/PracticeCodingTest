#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
	vector<int> answer;
	int len = prices.size();

	for (int i = 0; i < len - 1; i++) {
		int count = 0;
		int temp = prices[i];
		for (int j = i; j < len; j++) {
			if (temp < prices[j]) {
				temp = prices[j];
				count++;
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