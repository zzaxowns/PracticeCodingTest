//#include <string>
//#include <vector>
//
//using namespace std;
//
//string check_Day(int num) {
//	string day = "";
//
//	switch (num) {
//	case 0:
//		day = "THU";
//		break;
//	case 1:
//		day = "FRI";
//		break;
//	case 2:
//		day = "SAT";
//		break;
//	case 3:
//		day = "SUN";
//		break;
//	case 4:
//		day = "MON";
//		break;
//	case 5:
//		day = "TUE";
//		break;
//	case 6:
//		day = "WED";
//		break;
//	}
//
//	return day;
//}
//
//string solution(int a, int b) {
//	string answer = "";
//	int month[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
//	int temp = b;
//
//	for (int i = 0; i < a - 1; i++) { // a-1의 경우 X월일 때 X-1월의 값까지 계산하고 + Y일을 해야하기 때문
//		temp += month[i];
//	}
//
//	answer = check_Day(temp % 7);
//
//	return answer;
//}

#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
	string answer = "";
	string day[7] = { "THU","FRI","SAT","SUN","MON","TUE","WED" };
	int month[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int temp = b;

	for (int i = 0; i < a - 1; i++) { // a-1의 경우 X월일 때 X-1월의 값까지 계산하고 + Y일을 해야하기 때문
		temp += month[i];
	}

	answer = day[temp % 7];

	return answer;
} // 굳이 스위치문을 쓸 필요가 있었을까 ㅋㅋ