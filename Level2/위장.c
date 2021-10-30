#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
	int answer = 0;
	unordered_map<string, int> h;

	for (auto cloth : clothes) { h[cloth[1]]++; }

	for (auto sample : h) { answer += sample.second; }


	if (h.size() != 1) {
		int combination = 1;
		for (auto sample : h) { combination *= sample.second; }
		answer += combination;
	}

	return answer;
}