//#include<iostream>
//
//using namespace std;
//
//int main() {
//	int num = 0;
//	int count = 0;
//	cout << "����ؾ��ϴ� ������ ų�α׷� >>> ";
//	cin >> num;
//
//	if (num < 3 || 5000 < num) {
//		cout << "������ ��� ���� �ȿ� �����ϴ�." << endl;
//		return 0;
//	}
//
//	int max_3 = num / 3;
//	int max_5 = num / 5;
//
//	for (int i = 0; i < max_3; i++) {
//		for (int j = 0; j < max_5; j++) {
//			if (i * 3 + j * 5 == num) { 
//				count = i + j;
//				cout << "���� ���� [" << count << "] ���� ����" << endl;
//				return 0;
//			}
//		}
//	}
//
//	if (count == 0)
//		cout << "�Ұ���" << endl;
//
//	return 0;
//}

#include<iostream>

using namespace std;

int main() {
	int num = 0;
	int count = 0;
	cout << "����ؾ��ϴ� ������ ų�α׷� >>> ";
	cin >> num;

	if (num < 3 || 5000 < num) {
		cout << "������ ��� ���� �ȿ� �����ϴ�." << endl;
		return 0;
	}

	int max_3 = num / 3;
	int max_5 = num / 5;

	for (int i = 0; i < max_3; i++) {
		for (int j = 0; j < max_5; j++) {
			if (i * 3 + j * 5 == num) {
				count = i + j;
				cout << "���� ���� [" << count << "] ���� ����" << endl;
				return 0;
			}
		}
	}

	if (count == 0)
		cout << "�Ұ���" << endl;

	return 0;
}