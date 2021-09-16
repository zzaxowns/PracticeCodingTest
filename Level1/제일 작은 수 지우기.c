//#include <string>
//#include <vector>
//#include<algorithm>
//
//using namespace std;
//
//vector<int> solution(vector<int> arr) {
//	vector<int> answer;
//	int min = *min_element(arr.begin(), arr.end());
//
//	for (auto num : arr) {
//		if (min != num)
//			answer.push_back(num);
//	}
//
//	if (answer.empty()) { answer.push_back(-1); }
//	return answer;
//}
#include <string>
#include <vector>
#include<algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
	vector<int> answer = arr;
	int min_index = min_element(arr.begin(), arr.end()) - arr.begin();

	answer.erase(answer.begin() + min_index);

	return answer.empty() ? vector<int>(1, -1) : answer;
}