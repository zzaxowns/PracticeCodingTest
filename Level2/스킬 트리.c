#include <string>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
	int answer = 0;
	unordered_map<char, short> table;
	priority_queue<short> pq;

	int len = skill.size();
	for (int i = len; i >= 0; i--) { table[skill[i]] = i + 1; }

	len = skill_trees.size();
	for (int i = 0; i < len; i++) {
		int skill_len = skill_trees[i].size();

		for (int j = 0; j < skill_len; j++) {
			if (table(skill_trees[i]))
				pq.push(table[skill_trees[i]]);
			else
				pq.push(0);
		}


	}

	return answer;
}