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
// erase(����, ��) ����� 
// unique�� �̿��ؼ� ���Ľ�Ű�� ������ �ߺ��Ǵ� �κк��� end���� ����� ���� �ڵ� 