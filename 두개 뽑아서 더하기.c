#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


bool check_deplicate(int* answer, int answer_len, int number) { // ���� ���� �迭 �ȿ� ���� �ߺ� �Ǵ��� üũ
	for (int i = 0; i < answer_len; i++) {                           // �ߺ� = true , �ߺ� �ȵ� = false
		if (answer[i] == number) { return true; }
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
	int* answer = (int*)malloc(sizeof(int) * 200);
	//int current = 0;
	int answer_len = 0;
	int number = 0; // üũ�ؾ� �ϴ� ��

	for (int i = 0; i < numbers_len - 1; i++) {
		for (int j = i + 1; j < numbers_len; j++) {

			number = numbers[i] + numbers[j];

			if (!check_deplicate(answer, answer_len, number)) {
				answer[answer_len++] = number;

			}
		}
	}

	//for(int i=0; i< answer_len; i++){
	//    printf(" %d",answer[i]);
	//}

	bubble_Sort(answer, answer_len);

	return answer;
}