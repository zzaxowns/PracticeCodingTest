#include <string>
#include <vector>
#include <unordered_map>
#include <cstring>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
	int answer = 0;
	unordered_map<char, int> table;

	for (int i = 41; i < 91; i++) { table[i] = 0; }

	int size = skill.size();
	for (int i = 0; i < size; i++) { table[skill[i]] += i + 1; }

	size = skill_trees.size();
	for (int i = 0; i < size; i++) {
		int skill_Len = skill_trees[i].size();
		string str = "";

		for (int j = 0; j < skill_Len; j++) {
			int temp = table[skill_trees[i][j]];

			if (temp != 0)
				str += skill_trees[i][j];
		}

		if (strncmp(str.c_str(), skill.c_str(), str.length()))
			answer++;
	}

	return answer;
}