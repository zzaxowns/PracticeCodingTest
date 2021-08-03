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

	for (int i = 2; i < 10000000; i++) { // 에라토스테네스의 체
		if (prime_num[i] == 0) {
			for (int j = 2; j*i < 10000000; j++) {
				prime_num[j*i] = 1;
			}
		}
	}

	sort(numbers.begin(), numbers.end());// 주어진 문자열 정렬

	int len = numbers.size();
	for (int i = 0; i < len; i++) { // 정렬 시켜놓은 문자열 배열에 순서대로 넣기
		v.push_back(numbers[i] - '0');
		check.push_back(numbers[i] - '0');
	}

	do {                       // 순열을 통해 조합 찾기
		int temp = 0;
		for (auto num : v) {
			temp = temp * 10 + num;
			check.push_back(temp);
		}

	} while (next_permutation(v.begin(), v.end()));

	sort(check.begin(), check.end()); //중복 체크 이전에 정렬
	check.erase(unique(check.begin(), check.end()), check.end()); // 중복된거 제거

	for (auto num : check) { // 중복 없는 조합 사이에서 소수인지 판별
		if (prime_num[num] == 0) {
			answer++;
		}
	}

	return answer;
}