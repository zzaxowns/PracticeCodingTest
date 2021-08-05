//#include<iostream>
//
//using namespace std;
//
//int main() {
//	int num = 0;
//	int count = 0;
//	cout << "배달해야하는 설탕의 킬로그램 >>> ";
//	cin >> num;
//
//	if (num < 3 || 5000 < num) {
//		cout << "수량이 허용 범위 안에 없습니다." << endl;
//		return 0;
//	}
//
//	int max_3 = num / 3;
//	int max_5 = num / 5;
//
//	for (int i = 0; i < max_3; i++) {
//		for (int j = 0; j < max_5; j++) {
//			if (i * 3 + j * 5 == num) { 
//				count = i + j;
//				cout << "설탕 봉지 [" << count << "] 개로 가능" << endl;
//				return 0;
//			}
//		}
//	}
//
//	if (count == 0)
//		cout << "불가능" << endl;
//
//	return 0;
//}

#include<iostream>

using namespace std;

int main() {
	int num = 0;
	int count = 0;
	cout << "배달해야하는 설탕의 킬로그램 >>> ";
	cin >> num;

	if (num < 3 || 5000 < num) {
		cout << "수량이 허용 범위 안에 없습니다." << endl;
		return 0;
	}

	int max_3 = num / 3;
	int max_5 = num / 5;

	for (int i = 0; i < max_3; i++) {
		for (int j = 0; j < max_5; j++) {
			if (i * 3 + j * 5 == num) {
				count = i + j;
				cout << "설탕 봉지 [" << count << "] 개로 가능" << endl;
				return 0;
			}
		}
	}

	if (count == 0)
		cout << "불가능" << endl;

	return 0;
}