//#include <string>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//
//vector<int> solution(vector<string> gems) {
//	vector<int> answer;
//	unordered_map<string, int> table;
//
//	for (auto gem : gems) { table[gem] += 1; }
//
//	int front_Point = 0;
//	int end_Point = gems.size() - 1;
//	int len = gems.size();
//
//	for (int i = 0; i < len; i++) {
//		if (table[gems[end_Point]] > 1) {
//			table[gems[end_Point]]--;
//			end_Point--;
//		}
//		else if (table[gems[front_Point]] > 1) {
//			table[gems[front_Point]]--;
//			front_Point++;
//		}
//
//	}
//
//	answer.push_back(front_Point + 1);
//	answer.push_back(end_Point + 1);
//
//	return answer;
//}

#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> gems) {
	vector<int> answer(2, 0);
	unordered_map<string, int> table;
	int start = 0;
	int end = gems.size() - 1;
	int min = 100000;
	for (auto gem : gems) {
		table[gem]++;
	}

	int len = gems.size();

	for (int i = 0; i < len; i++) {
		if (table[gems[end]] > 1) {
			table[gems[end]]--;
			end--;
		}
	}

	min = min < end - start ? min : end - start;
	answer[0] = start + 1;
	answer[1] = end + 1;

	while (end < len) {
		string gem = gems[start];
		start++;
		table[gem]--;

		if (table[gem] == 0) {
			end++;

			for (; end < len; end++) {
				table[gems[end]]++;

				if (gem == gems[end])
					break;
			}

			if (end == len) break;
		}

		if (min > end - start) {
			answer[0] = start + 1;
			answer[1] = end + 1;
			min = end - start;
		}

	}

	return answer;
}
