#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
	vector<vector<int>> answer = arr1;
	int width = arr1[0].size();
	int height = arr1.size();

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			answer[i][j] = arr1[i][j] + arr2[i][j];
		}
	}

	return answer;
}