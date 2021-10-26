#include <string>
#include <vector>

using namespace std;

int solution(int m, int n, vector<vector<int>> puddles) {
	vector<vector<int>> map(n, vector<int>(m, 1));

	for (auto puddle : puddles) {
		map[puddle[0]][puddle[1]] = 0;
	}

	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			map[i][j] = map[i][j] == 0 ? 0 : map[i - 1][j] + map[i][j - 1];
		}
	}

	return map[n - 1][m - 1];
}