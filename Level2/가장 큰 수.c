//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//bool check_max(string str1, string str2) {
//	return str1 + str2 > str2 + str1;
//}
//
//string solution(vector<int> numbers) {
//	string answer = "";
//	int len = numbers.size();
//	int clear = 0;
//
//	for (int i = len - 1; i >= 0; i--) {
//		for (int j = len - 1; j >= clear + 1; j--) {
//			if (check_max(to_string(numbers[j]), to_string(numbers[j - 1]))) {
//				int temp = numbers[j - 1];
//				numbers[j - 1] = numbers[j];
//				numbers[j] = temp;
//			}
//		}
//
//		clear++;
//	}
//
//	for (int i = 0; i < len; i++) {
//		answer += to_string(numbers[i]);
//	}
//
//	return answer;
//} // 시간 초과로 실패하는 부분 있음

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool check_max(string str1, string str2) {
	return str1 + str2 > str2 + str1;
}

string solution(vector<int> numbers) {
	string answer = "";
	vector<string> test;

	for (auto num : numbers) {
		test.push_back(to_string(num));
	}

	sort(test.begin(), test.end(), check_max);

	for (auto num : test) {
		answer += num;
	}

	if (test.at(0) == "0") {
		answer = "0";
	}

	return answer;
}