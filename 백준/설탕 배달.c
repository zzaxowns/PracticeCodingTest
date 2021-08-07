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
//	while (1) {
//
//		if (num == 0) {
//			break;
//		}
//		else if (num < 3) {
//			count = -1;
//			break;
//		}
//		else if (num % 5 == 0) {
//			count += num / 5;
//			break;
//		}
//		else {
//			num -= 3;
//			count++;
//		}
//	}
//
//	if (count != -1)
//		cout << "설탕 봉지 [" << count << "] 개로 가능" << endl;
//	else
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
} // 이거까지 포스팅 완료 

#include <iostream>
using namespace std;
int dp[5001]; //global 변수이기때문에 0으로 초기화된 배열

int main() {
	int n;
	cin >> n;
	//3kg와 5kg를 만드는 가장 최소의 봉지수는 1
	//따라서 dp[3]과 dp[5]는 무조건 1
	dp[3] = dp[5] = 1;

	//3과 5 다음인 6부터 for loop 순회
	for (int i = 6; i <= n; i++) {
		if (dp[i - 3]) dp[i] = dp[i - 3] + 1;

		//이미 dp[i-3]에 값이 존재할때 dp[i]가 업데이트 됐었을 수 있다.
		//만약 dp[i]에 값이 없다면 dp[i] = dp[i-5] +1 로 업데이트
		if (dp[i - 5]) dp[i] = dp[i] ? min(dp[i], dp[i - 5] + 1) : dp[i - 5] + 1;
	}
	cout << (dp[n] == 0 ? -1 : dp[n]) << endl;
	return 0;
}