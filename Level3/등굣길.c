#include <string>
#include <vector>

using namespace std;

int solution(int m, int n, vector<vector<int>> puddles) {
	int answer = 0;
	vector<vector<int>> map(n, vector<int>(m, 1));

	for (auto puddle : puddles) {
		map[puddle[0]][puddle[1]] = 0;
	}


	return answer;
}