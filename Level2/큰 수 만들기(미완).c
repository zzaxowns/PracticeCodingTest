#include <string>
#include <vector>
#include <iostream>

#define MAX 99

using namespace std;

string solution(string number, int k) {
	string answer = "";
	int count = 0;
	vector<char> arr;

	for (auto ch : number) { arr.push_back(ch); }

	while (1) {
		int temp = k + count;
		int min = 0;
		for (int i = 0; i < temp; i++) {
			if (arr[i] < arr[min])
				min = i;
		}

		arr[min] = MAX;
		count++;

		if (count == k)
			break;
	}

	for (auto ch : arr) {
		if (ch != MAX)
			answer += ch;
	}

	return answer;
}