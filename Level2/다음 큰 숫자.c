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
		if (num & 1 << i) {
			count++;
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