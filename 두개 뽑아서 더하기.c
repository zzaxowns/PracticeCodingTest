#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool deplicate_Check(int* answer, int answer_len, int check_num) { // 중복 체크 함수: 중복 - true/ 중복x - false

	for (int i = 0; i < answer_len; i++) {
		if (answer[i] == check_num) {
			return true;
		}
	}
	return false;
}

void bubble_Sort(int* answer, int answer_len) { // 버블 정렬
	int temp = 0;

	for (int i = 0; i < answer_len; i++) {
		for (int j = 0; j < (answer_len - 1) - i; j++) {
			if (answer[j] > answer[j + 1]) { // 앞에 있는게 뒤에 있는 것보다 크면 스왑
				temp = answer[j];
				answer[j] = answer[j + 1];
				answer[j + 1] = temp;
			}
		}
	}
}


// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len) {
	// return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
	int* answer = (int*)malloc(sizeof(int));
	int answer_len = 0; // 현재 배열의 길이

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