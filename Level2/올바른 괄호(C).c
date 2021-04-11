//#include <stdio.h>
//#include <stdbool.h>
//#include <stdlib.h>
//
//// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
//bool solution(const char* s) {
//	bool answer = true;
//	int check_Num = 0;
//	int len = strlen(s);
//
//	if (s[0] == ')' || s[len - 1] == '(') { //���� �����ְų� ���� �������� ��  false
//		answer = false;
//	}
//	else {                         //�� �̿ܿ��� ��ȣ�� ���� �´��� Ȯ�� 
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
//} // ���� �ִ� �ڵ�

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
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
}// �ذ�� �ڵ� "() )))) ((((()" �� ���¸� �����ϸ� �ٷ� Ŭ���� ���� 