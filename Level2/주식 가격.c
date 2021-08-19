#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
	vector<int> answer;
	int len = prices.size();

	for (int i = 0; i < len; i++) {
		int count = 1;
		int temp = prices[i];
		for (int j = i + 1; j < len; j++) {
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
//������ �ʹ� �ָ��ؼ� �켱 ����