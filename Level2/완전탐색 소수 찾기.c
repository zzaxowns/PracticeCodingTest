//#include <string>
//#include <vector>
//#include <iostream>
//#include <set>
//using namespace std;
//
//int solution(string numbers) {
//	int answer = 0;
//	//vector<int> v; 
//	set<int> table;
//	bool check_arr[10000000] = { 0, };
//
//	int len = numbers.length();
//	for (int i = 0; i < len; i++) {
//		table.insert(numbers[i] - '0');
//	}
//
//
//	for (int i = 2; i < 10000000; i++) {
//		if (check_arr[i] == 0) {
//			for (int j = 2; j*i < 10000000; j++) {
//				check_arr[j*i] = 1;
//			}
//		}
//	}
//
//
//
//	return answer;
//}

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string numbers) {
	int answer = 0;
	vector<int> v;
	vector<int> check;
	bool prime_num[10000000] = { 1,1, };

	for (int i = 2; i < 10000000; i++) { // �����佺�׳׽��� ü
		if (prime_num[i] == 0) {
			for (int j = 2; j*i < 10000000; j++) {
				prime_num[j*i] = 1;
			}
		}
	}

	sort(numbers.begin(), numbers.end());// �־��� ���ڿ� ����

	int len = numbers.size();
	for (int i = 0; i < len; i++) { // ���� ���ѳ��� ���ڿ� �迭�� ������� �ֱ�
		v.push_back(numbers[i] - '0');
		check.push_back(numbers[i] - '0');
	}

	do {                       // ������ ���� ���� ã��
		int temp = 0;
		for (auto num : v) {
			temp = temp * 10 + num;
			check.push_back(temp);
		}

	} while (next_permutation(v.begin(), v.end()));

	sort(check.begin(), check.end()); //�ߺ� üũ ������ ����
	check.erase(unique(check.begin(), check.end()), check.end()); // �ߺ��Ȱ� ����

	for (auto num : check) { // �ߺ� ���� ���� ���̿��� �Ҽ����� �Ǻ�
		if (prime_num[num] == 0) {
			answer++;
		}
	}

	return answer;
}