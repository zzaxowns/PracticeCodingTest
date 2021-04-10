#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
	vector<int> answer;
	int check = 0; // 자리수를 알기 위해

	while (n) {
		check = n % 10; // 들어온 n의 가장 끝자리를 확인 

		if (check == 0) { // 이게 0이고 벡터가 비어 있으면 넣지 않음
			if (!answer.empty()) {
				answer.push_back(check);
			}
		}
		else {// 그 이외에는 벡터에 넣음
			answer.push_back(check);
		}

		n /= 10; // 10 단위로 나누기를 해서 일에 자리를 없애줌
	}

	return answer;
}