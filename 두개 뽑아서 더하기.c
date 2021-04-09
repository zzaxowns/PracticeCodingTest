#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


bool check_deplicate(int* answer, int answer_len, int number) { // 들어온 값이 배열 안에 값과 중복 되는지 체크
	for (int i = 0; i < answer_len; i++) {                           // 중복 = true , 중복 안됨 = false
		if (answer[i] == number) { return true; }
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
	int* answer = (int*)malloc(sizeof(int) * 200);
	//int current = 0;
	int answer_len = 0;
	int number = 0; // 체크해야 하는 값

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