//#include <string>
//#include <vector>
//
//using namespace std;
//
//string solution(string s) {
//	string answer = "";
//	int len = s.size();
//	int mid = len / 2;
//
//	if (len % 2 == 0) { // 짝수일 경우 (앞+뒤 2개)
//		answer.push_back(s[mid - 1]);
//		answer.push_back(s[mid]);
//	}
//	else { // 홀수 
//		answer.push_back(s[mid]);
//	}
//
//	return answer;
//}

#include <string>
#include <vector>

using namespace std;

string solution(string s) {
	string answer = "";
	int len = s.size();
	int mid = len / 2;

	if (len % 2 == 0) { // 짝수일 경우 (앞+뒤 2개)
		answer = s.substr(mid - 1, 2);
	}
	else { // 홀수 
		answer = s.substr(mid, 1);
	}


	return answer;
} // substr(시작, 시작부터 길이) 지정해서 넣는법