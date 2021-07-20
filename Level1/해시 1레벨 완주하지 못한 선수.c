//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//string solution(vector<string> participant, vector<string> completion) {
//	string answer = "";
//	int participant_Len = participant.size();
//
//	//µÎ º¤ÅÍ Á¤·Ä
//	sort(participant.begin(), participant.end());
//	sort(completion.begin(), completion.end());
//
//	for (int i = 0; i < participant_Len; i++) {
//		if (participant[i] != completion[i]) {
//			answer = participant[i];
//			break;
//		}
//
//	}
//
//	return answer;
//}

#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	string answer = "";
	unordered_map<string, int> table;

	for (auto& i : participant) { table[i]++; }
	for (auto& i : completion) { table[i]--; }

	for (auto& i : table) {
		if (i.second > 0) {
			answer = i.first;
		}
	}

	return answer;
}