#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul) {
	string answer = "김서방은 " + to_string(find(seoul.begin(), seoul.end(), "Kim") - seoul.begin()) + "에 있다";
	return answer;
} // 문자열 더할 때 자료형을 생각하자 