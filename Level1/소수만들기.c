#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
	int answer = 0;
	bool check_arr[3000] = { 0, };
	int sum = 0;
	int len = nums.size();

	for (int i = 2; i < 3000; i++) {
		if (check_arr[i] == 0) {
			for (int j = 2; i*j < 3000; j++) {
				check_arr[i*j] = 1;
			}
		}
	}

	for (int i = 0; i < len - 2; i++) {
		for (int j = i + 1; j < len - 1; j++) {
			for (int k = j + 1; k < len; k++) {
				sum = nums[i] + nums[j] + nums[k];
				if (!check_arr[sum]) {
					printf(" %d", sum);
					answer++;
				}
			}
		}
	}

	return answer;
} //에라토스테네스의 체를 이용해서 확인 