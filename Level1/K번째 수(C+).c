#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer;
	vector<int> temp;

	int len = commands.size();
	int first, last, find = 0;

	for (int i = 0; i < len; i++) {
		first = commands[i][0];
		last = commands[i][1];
		find = commands[i][2];

		copy(array.begin() + first, array.begin() + last, temp);
		sort(temp.begin(), temp.end());

	}


	return answer;
}