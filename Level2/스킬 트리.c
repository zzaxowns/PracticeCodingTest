#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
	int answer = 0;
	unordered_map<char, short> table;

	for (int i = 41; i < 91; i++) { table[41] = 0; }

	int size = skill.size();
	for (int i = size - 1; i >= 0; i--) { table[skill[i]] += i; }

	size = skill_trees.size();
	for (int i = 0; i < size; i++) {
		int skill_Len = skill_trees[i].size();

		for (int j = 0; j < skill_Len; j++) {

		}
	}

	return answer;
}