#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
	vector<int> answer;
	vector<int> temp;
	vector<int> sample(n, 1);
	int start = left / n;
	int end = right / n;

	for (int i = n - 1; i >= 0; i--) { sample[i] = i < start ? sample[start] : i + 1; }

	for (int i = start; i <= end; i++) {
		for (int j = 0; j < n; j++) { temp.push_back(sample[j]); }
		for (int j = 0; j < i + 1; j++) { sample[j]++; }
	}

	start = left % n;
	int gab = start + right - left;
	for (int i = start; i <= gab; i++) { answer.push_back(temp[i]); }

	return answer;
}