//#include <string>
//#include <vector>
//
//using namespace std;
//
//string solution(int n) {
//	string answer = "수";
//
//	for (int i = 1; i < n; i++) {
//		bool even = i % 2 == 0 ? true : false;
//
//		if (even)
//			answer += "수";
//		else
//			answer += "박";
//	}
//
//
//	return answer;
//}

#include <string>
#include <vector>

using namespace std;

string solution(int n) {
	string answer = "";

	for (int i = 0; i < n; i++) {
		i & 1 ? answer += "박" : answer += "수";
	}


	return answer;
}