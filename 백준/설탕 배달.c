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

	while (1) {

		if (num == 0) {
			break;
		}
		else if (num < 3) {
			count = -1;
			break;
		}
		else if (num % 5 == 0) {
			count += num / 5;
			break;
		}
		else {
			num -= 3;
			count++;
		}
	}

	if (count != -1)
		cout << "설탕 봉지 [" << count << "] 개로 가능" << endl;
	else
		cout << "불가능" << endl;

	return 0;
}