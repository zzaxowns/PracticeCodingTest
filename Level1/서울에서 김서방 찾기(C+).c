#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul) {
	string answer = "�輭���� " + to_string(find(seoul.begin(), seoul.end(), "Kim") - seoul.begin()) + "�� �ִ�";
	return answer;
} // ���ڿ� ���� �� �ڷ����� �������� 