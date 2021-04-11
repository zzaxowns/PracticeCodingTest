#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int fibo(int n) { //n이 3 이상부터 들어오기 떄문에 3번째 부터 지정값
	int first = 1;
	int second = 1;
	int result = 2;

	for (int i = 3; i < n; i++) {
		first = second;
		second = result;
		result = (first + second) % 1234567;
		// 결과 값을 1234567로 지속적으로 나눠줘서 각 자료형의 메모리 문제 없는 느낌.
	}

	return result;
}

int solution(int n) {
	int answer = 0;

	if (n == 1) { // n이 1 또는 2일 때는 1234567로 나눌 필요 없음
		answer = 0;
	}
	else if (n == 2) {
		answer = 1;
	}
	else {
		answer = fibo(n);
	}

	return answer;
}