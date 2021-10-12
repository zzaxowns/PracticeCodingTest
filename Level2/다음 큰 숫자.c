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

int beatMask(int n) {
	int ret = 0;
	// n의 이진수에서 1의 개수 세기
	for (int i = 0; i < 31; i++) {
		if (n & 0x01 << i)
			ret++;
	}
	return ret;
}

int solution(int n) {
	int answer = 0;
	int add = 1;

	while (1) {
		if (binary(n) == beatMask(n + add))
			break;

		add++;
	}

	return n + add;
}