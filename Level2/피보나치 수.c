#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int fibo(int n) { //n�� 3 �̻���� ������ ������ 3��° ���� ������
	int first = 1;
	int second = 1;
	int result = 2;

	for (int i = 3; i < n; i++) {
		first = second;
		second = result;
		result = (first + second) % 1234567;
		// ��� ���� 1234567�� ���������� �����༭ �� �ڷ����� �޸� ���� ���� ����.
	}

	return result;
}

int solution(int n) {
	int answer = 0;

	if (n == 1) { // n�� 1 �Ǵ� 2�� ���� 1234567�� ���� �ʿ� ����
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