#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> triangle) {
	int answer = 0;

	for (int i = triangle.size() - 1; i >= 0; i--) {
		for (int j = 0; j < triangle[i].size() - 1; j++) {
			int num = triangle[i][j] > triangle[i][j + 1] ? triangle[i][j] : triangle[i][j + 1];
			triangle[i - 1][j] += num;
		}
	}

	answer = triangle[0][0];

	return answer;
}