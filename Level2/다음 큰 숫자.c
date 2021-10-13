//#include <string>
//#include <vector>
//
//using namespace std;
//
//int binary(int num) {
//	int count = 0;
//
//	while (num != 0) {
//		if (num % 2 == 1) count++;
//		num /= 2;
//	}
//
//	return count;
//}
//
//int solution(int n) {
//	int answer = 0;
//	int add = 1;
//
//	while (1) {
//		if (binary(n) == binary(n + add))
//			break;
//
//		add++;
//	}
//
//	return n + add;
//}

#include <string>
#include <vector>

using namespace std;

int binary(int num) {
	int count = 0;

	while (num != 0) {
		if (num % 2 == 1) count++;
		num /= 2;
	}

	return count;
}

int bitMask(int num) {
	int count = 0;

	for (int i = 0; i < 31; i++) {
		if (num & 1 << i) {// 각 자리수를 1과 & 연산 하고 i만큼씩 자리 이동을 하면서
			count++;       // 참이라는 의미는 1이라는 의미가 되기 때문에 count++;
		}
	}

	return count;
}

int solution(int n) {
	int answer = 0;
	int add = 1;

	while (1) {
		if (binary(n) == bitMask(n + add))
			break;

		add++;
	}

	return n + add;
}