//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//vector<int> solution(vector<int> arr)
//{
//	vector<int> answer;
//	int len = arr.size();
//
//	for (int i = 0; i < len; i++) {
//		if (answer.empty() || arr[i] != answer.back()) {
//			answer.push_back(arr[i]);
//		}
//	}
//
//	return answer;
//}

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr)
{

	arr.erase(unique(arr.begin(), arr.end()), arr.end());

	vector<int> answer = arr;
	return answer;
}
// erase(시작, 끝) 지우기 
// unique를 이용해서 정렬시키고 나오는 중복되는 부분부터 end까지 지우게 만든 코드 