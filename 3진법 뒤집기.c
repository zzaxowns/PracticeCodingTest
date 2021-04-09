#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {
	int answer = 0;
	vector<int> v;
	int x = 1; // 10�������� �ٲ� �� 3�� �ŵ���� ����� ���� ����

	while (n) { //num�� int���� 0.~~ �� ������ ���� 0���� ó����
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