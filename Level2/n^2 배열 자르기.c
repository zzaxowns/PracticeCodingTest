#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
	vector<int> answer;
	vector<int> temp;
	vector<int> sample(n, 1);

	for (int i = 0; i < n; i++) { sample[i] = 1 + i; } //N

	for (int i = 0; i < n; i++) {//N
		for (int j = 0; j < i; j++) { sample[j]++; }//N^2

		for (int j = 0; j < n; j++) { temp.push_back(sample[j]); }
	}

	for (int i = left; i <= right; i++) { answer.push_back(temp[i]); }

	return answer;
}