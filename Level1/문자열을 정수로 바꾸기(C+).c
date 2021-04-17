//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(string s) {
//	int answer = 0;
//	int len = s.size();
//	int x = 1;
//
//	for (int i = len - 1; i > 0; i--) {
//		answer += (s[i] - 48) * x;
//		x *= 10;
//	}
//
//	if (s[0] == '-' || s[0] == '+') {
//		if (s[0] == '-')
//			answer *= -1;
//	}
//	else {
//		answer += (s[0] - 48) *x;
//	}
//
//
//	return answer;
//}

#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = stoi(s);
    return answer;
}

//가장 간단한 방법이자 stoi라는 함수 -- string to int / string to float/ long int / double 등 다양한 함수가 있었음