#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> A, vector<int> B)
{
	int answer = 0;
	int len = A.size();

	sort(A.begin(), A.end());
	sort(B.begin(), B.end(), greater());

	for (int i = 0; i < len; i++) {
		answer += A[i] * B[i];
	}

	return answer;
}