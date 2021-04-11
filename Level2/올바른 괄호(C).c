//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
//bool solution(const char* s) {
//	bool answer = true;
//	int check_Num = 0;
//	int len = strlen(s);
//
//	if (s[0] == ')' || s[len - 1] == '(') { //앞이 닫혀있거나 끝이 열려있을 때  false
//		answer = false;
//	}
//	else {                         //그 이외에는 괄호의 쌍이 맞는지 확인 
//		for (int i = 0; i < len; i++) {
//			if (s[i] == '(') {
//				check_Num++;
//			}
//			else if (s[i] == ')') {
//				check_Num--;
//			}
//		}
//
//		if (check_Num == 0) {
//			answer = true;
//		}
//		else {
//			answer = false;
//		}
//	}
//
//	return answer;
//} // 문제 있는 코드

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
	bool answer = true;
	int check_Num = 0;
	int len = strlen(s);

	for (int i = 0; i < len; i++) {
		if (check_Num < 0) {
			answer = false;
			break;
		}

		if (s[i] == '(') {
			check_Num++;
		}
		else if (s[i] == ')') {
			check_Num--;
		}
	}

	if (check_Num != 0)
		answer = false;

	return answer;
}// 해결된 코드 "() )))) ((((()" 이 형태를 생각하면 바로 클리어 가능 