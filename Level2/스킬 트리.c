//#include <string>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//
//int solution(string skill, vector<string> skill_trees) {
//	int answer = 0;
//	unordered_map<char, int> table;
//
//	for (int i = 41; i <= 91; i++) { table[i] = 0; }
//
//	int size = skill.size();
//	for (int i = 0; i < size; i++) { table[skill[i]] += 1; }
//
//	size = skill_trees.size();
//	for (int i = 0; i < size; i++) {
//		int skill_Len = skill_trees[i].size();
//		string str = "";
//
//		for (int j = 0; j < skill_Len; j++) {
//			if (table[skill_trees[i][j]])
//				str += skill_trees[i][j];
//		}
//
//		bool flag = true;
//
//		for (int j = 0; j < str.size(); j++) {
//			if (str[j] != skill[j]) {
//				flag = false;
//				break;
//			}
//		}
//
//		if (flag)
//			answer++;
//	}
//
//	return answer;
//}

//strncmp를 이용한 풀이
#include <string>
#include <vector>
#include <unordered_map>
#include <cstring>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
	int answer = 0;
	unordered_map<char, int> table;

	for (int i = 41; i <= 91; i++) { table[i] = 0; }

	int size = skill.size();
	for (int i = 0; i < size; i++) { table[skill[i]] += 1; }

	size = skill_trees.size();
	for (int i = 0; i < size; i++) {
		int skill_Len = skill_trees[i].size();
		string str = "";

		for (int j = 0; j < skill_Len; j++) {
			if (table[skill_trees[i][j]])
				str += skill_trees[i][j];
		}

		if (str == "" || strncmp(str.c_str(), skill.c_str(), str.length()) == 0) {
			answer++;
		}
	}

	return answer;
}