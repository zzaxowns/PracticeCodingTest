#include <string>
#include <vector>

using namespace std;

string solution(string s) {
	string answer = "";
	int len = s.size();
	int mid = len / 2;

	if (len % 2 == 0) { // ¦���� ��� (��+�� 2��)
		answer.push_back(s[mid - 1]);
		answer.push_back(s[mid]);
	}
	else { // Ȧ�� 
		answer.push_back(s[mid]);
	}

	return answer;
}