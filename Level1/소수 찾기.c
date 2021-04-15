//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(int n) {
//	int answer = 0;
//	int count = 0;
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= i; j++) {
//			if (count > 2) { // 약수가 2개 이상이면 루프 탈출
//				break;
//			}
//
//			if (i%j == 0) { // 약수가 나올 때마다 count +1
//				count++;
//			}
//		}
//
//		if (count == 2) { // for문이 끝났을 때 약수가 2개면 소수
//			answer++;
//		}
//
//		count = 0; //count 변수 초기화 
//	}
//
//	return answer;
//} // 효율성이랑 자리 수가 긴 소수는 안됨.

#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
	int answer = 0;
	bool isbreak = false;

	for (int i = 2; i <= n; i++) {
		isbreak = false;

		for (int j = 2; j <= sqrt(i); j++) {
			if (i%j == 0) { //나눠진다.
				isbreak = true;
				break;
			}
		}

		if (!isbreak) {
			answer++;
		}

	}

	return answer;
} // 자리가 긴 소수 까지 가능한데 효율성 부분에서 떨어짐