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

	while (1) {

		if (num == 0) {
			break;
		}
		else if (num < 3) {
			count = -1;
			break;
		}
		else if (num % 5 == 0) {
			count += num / 5;
			break;
		}
		else {
			num -= 3;
			count++;
		}
	}

	if (count != -1)
		cout << "���� ���� [" << count << "] ���� ����" << endl;
	else
		cout << "�Ұ���" << endl;

	return 0;
}