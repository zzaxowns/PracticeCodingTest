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
//	for (int i = 0; i < a - 1; i++) { // a-1�� ��� X���� �� X-1���� ������ ����ϰ� + Y���� �ؾ��ϱ� ����
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

	for (int i = 0; i < a - 1; i++) { // a-1�� ��� X���� �� X-1���� ������ ����ϰ� + Y���� �ؾ��ϱ� ����
		temp += month[i];
	}

	answer = day[temp % 7];

	return answer;
} // ���� ����ġ���� �� �ʿ䰡 �־����� ����