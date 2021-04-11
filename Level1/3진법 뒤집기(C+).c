#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {
	int answer = 0;
	vector<int> v;
	int x = 1; // 10진법으로 바꿀 때 3의 거듭수를 만들기 위한 변수

	while (n) { //num이 int여서 0.~~ 가 나오는 순간 0으로 처리됨
		v.push_back(n % 3);
		n /= 3;
	}

	reverse(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		answer += v[i] * x;
		x *= 3;
	}

	return answer;
}