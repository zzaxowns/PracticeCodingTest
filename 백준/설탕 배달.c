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
//} // �̰ű��� ������ �Ϸ� 

//#include<iostream>
//
//using namespace std;
//
//int dp(int N, int count) {
//
//	if (N == 0) {
//		return count;
//	}
//	else if (N < 3) {
//		return -1;
//	}
//	else if (N % 5 == 0) {
//		int temp = N / 5;
//		count += temp;
//		return count;
//	}
//	else {
//		count++;
//		dp(N - 3, count);
//	}
//
//}
//
//int main() {
//
//	int N = 0;
//	int count = 0;
//	cout << "����ؾ��ϴ� ������ ų�α׷� >>> ";
//	cin >> N;
//
//	if (N < 3 || 5000 < N) {
//		cout << "-1" << endl;
//		return 0;
//	}
//
//	int num = dp(N, count);
//
//	cout << num << endl;
//
//	return 0;
//}

#include<iostream>
#include<algorithm>

#define MAX 5001

using namespace std;

int main() {

	int N = 0;
	int arr[MAX] = { 0, };

	cout << "����ؾ��ϴ� ������ ų�α׷� >>> ";
	cin >> N;

	if (N < 3 || 5000 < N) {
		cout << "-1" << endl;
		return 0;
	}

	arr[3] = 1;
	arr[5] = 1;

	for (int i = 6; i <= N; i++) {
		if (arr[i - 3]) { arr[i] = arr[i - 3] + 1; }

		if (arr[i - 5]) { arr[i] = arr[i - 5] + 1; }
	}

	if (arr[N] == 0) {
		cout << "-1" << endl;
	}
	else {
		cout << arr[N] << endl;
	}

	return 0;
}