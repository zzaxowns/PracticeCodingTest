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
//	while (1) {
//
//		if (num == 0) {
//			break;
//		}
//		else if (num < 3) {
//			count = -1;
//			break;
//		}
//		else if (num % 5 == 0) {
//			count += num / 5;
//			break;
//		}
//		else {
//			num -= 3;
//			count++;
//		}
//	}
//
//	if (count != -1)
//		cout << "���� ���� [" << count << "] ���� ����" << endl;
//	else
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
} // �̰ű��� ������ �Ϸ� 

#include <iostream>
using namespace std;
int dp[5001]; //global �����̱⶧���� 0���� �ʱ�ȭ�� �迭

int main() {
	int n;
	cin >> n;
	//3kg�� 5kg�� ����� ���� �ּ��� �������� 1
	//���� dp[3]�� dp[5]�� ������ 1
	dp[3] = dp[5] = 1;

	//3�� 5 ������ 6���� for loop ��ȸ
	for (int i = 6; i <= n; i++) {
		if (dp[i - 3]) dp[i] = dp[i - 3] + 1;

		//�̹� dp[i-3]�� ���� �����Ҷ� dp[i]�� ������Ʈ �ƾ��� �� �ִ�.
		//���� dp[i]�� ���� ���ٸ� dp[i] = dp[i-5] +1 �� ������Ʈ
		if (dp[i - 5]) dp[i] = dp[i] ? min(dp[i], dp[i - 5] + 1) : dp[i - 5] + 1;
	}
	cout << (dp[n] == 0 ? -1 : dp[n]) << endl;
	return 0;
}