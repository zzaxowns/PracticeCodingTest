#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
	vector<int> answer;
	int len = arr.size();

	for (int i = 0; i < len; i++) {
		if (answer.empty() || arr[i] != answer.back()) {
			answer.push_back(arr[i]);
		}
	}

	return answer;
}