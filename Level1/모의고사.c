#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
	vector<int> answer;
	int len = answers.size();
	int scores[3] = { 0, };

	int first_person[5] = { 1,2,3,4,5 };
	int second_person[8] = { 2,1,2,3,2,4,2,5 };
	int third_person[10] = { 3,3,1,1,2,2,4,4,5,5 };

	for (int i = 0; i < len; i++) {
		if (answers[i] == first_person[i % 5])
			scores[0]++;

		if (answers[i] == second_person[i % 8])
			scores[1]++;

		if (answers[i] == third_person[i % 10])
			scores[2]++;
	}

	int max_score = max(max(scores[0], scores[1]), scores[2]);

	for (int i = 0; i < 3; i++) {
		if (scores[i] == max_score)
			answer.push_back(i + 1);
	}

	return answer;
}