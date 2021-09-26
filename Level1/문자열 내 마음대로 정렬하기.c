#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int N;

bool comp(string a, string b) {
	if (a[N] != b[N]) {
		return a[N] < b[N];
	}
	else {
		return a < b;
	}
}

vector<string> solution(vector<string> strings, int n) {
	vector<string> answer = strings;
	N = n;

	sort(answer.begin(), answer.end(), comp);

	return answer;
}