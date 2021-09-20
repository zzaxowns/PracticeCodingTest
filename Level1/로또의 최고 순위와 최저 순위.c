#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
	vector<int> answer;
	unordered_map<int, int> table;
	unordered_map<int, int> rank;

	rank[6] = 1;
	rank[5] = 2;
	rank[4] = 3;
	rank[3] = 4;
	rank[2] = 5;
	rank[1] = 6;
	rank[0] = 6;

	int rand = 0;
	int same = 0;

	for (auto num : lottos) {
		if (num == 0)
			rand++;
		else
			table[num] = 1;
	}

	for (auto num : win_nums) {
		if (table[num])
			same++;
	}

	printf("%d  %d", rand, same);
	answer.push_back(rank[same + rand]);
	answer.push_back(rank[same]);

	return answer;
}