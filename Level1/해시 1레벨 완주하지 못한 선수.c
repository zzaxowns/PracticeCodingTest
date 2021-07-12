#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	string answer = "";
	int participant_Len = participant.size();

	//µÎ º¤ÅÍ Á¤·Ä
	sort(participant.begin(), participant.end());
	sort(completion.begin(), completion.end());

	for (int i = 0; i < participant_Len; i++) {
		if (participant[i] != completion[i]) {
			answer = participant[i];
			break;
		}

	}

	return answer;
}