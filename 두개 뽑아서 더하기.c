#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool deplicate_Check(int* answer, int answer_len, int check_num) { // �ߺ� üũ �Լ�: �ߺ� - true/ �ߺ�x - false

	for (int i = 0; i < answer_len; i++) {
		if (answer[i] == check_num) {
			return true;
		}
	}
	return false;
}

void bubble_Sort(int* answer, int answer_len) { // ���� ����
	int temp = 0;

	for (int i = 0; i < answer_len; i++) {
		for (int j = 0; j < (answer_len - 1) - i; j++) {
			if (answer[j] > answer[j + 1]) { // �տ� �ִ°� �ڿ� �ִ� �ͺ��� ũ�� ����
				temp = answer[j];
				answer[j] = answer[j + 1];
				answer[j + 1] = temp;
			}
		}
	}
}


// numbers_len�� �迭 numbers�� �����Դϴ�.
int* solution(int numbers[], size_t numbers_len) {
	// return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
	int* answer = (int*)malloc(sizeof(int));
	int answer_len = 0; // ���� �迭�� ����

	for (int i = 0; i < numbers_len; i++) {
		for (int j = i + 1; j < numbers_len; j++) {
			if (!deplicate_Check(answer, answer_len, numbers[i] + numbers[j])) {
				answer[answer_len] = numbers[i] + numbers[j];
				answer_len++;
			}
		}

	}

	bubble_Sort(answer, answer_len);

	return answer;
}