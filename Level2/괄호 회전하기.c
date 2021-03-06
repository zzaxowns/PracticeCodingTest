//#include <string>
//#include <vector>
//#include <deque>
//
//using namespace std;
//
//bool checking(deque<char> arr) {
//	int shape[3] = { 0, };
//	int check = true;
//
//	for (auto ch : arr) {
//
//		if (ch == '(' || ch == ')')
//			ch == '(' ? shape[0]++ : shape[0]--;
//		else if (ch == '[' || ch == ']')
//			ch == '[' ? shape[1]++ : shape[1]--;
//		else if (ch == '{' || ch == '}')
//			ch == '{' ? shape[2]++ : shape[2]--;
//
//		if (shape[0] < 0 || shape[1] < 0 || shape[2] < 0) {
//			check = false;
//			break;
//		}
//	}
//
//	if (!(shape[0] == 0 && shape[1] == 0 && shape[2] == 0))
//		check = false;
//
//	return check;
//}
//
//int solution(string s) {
//	int answer = 0;
//	deque<char> arr;
//
//	for (auto& ch : s) { arr.push_back(ch); }
//
//	for (int i = 0; i < s.size(); i++) {
//		if (checking(arr)) { answer++; }
//
//		char temp = arr.front();
//		arr.pop_front();
//		arr.push_back(temp);
//	}
//
//	return answer;
//}

#include <string>
#include <vector>
#include <deque>
#include <stack>

using namespace std;

bool check_stack(deque<char> arr) {
	stack<char> s;

	for (int i = 0; i < arr.size(); i++) {
		if (s.empty()) {
			s.push(arr[i]);
			continue;
		}

		char temp = s.top();

		if (temp == '(' && arr[i] == ')')
			s.pop();
		else if (temp == '{' && arr[i] == '}')
			s.pop();
		else if (temp == '[' && arr[i] == ']')
			s.pop();
		else
			s.push(arr[i]);
	}

	return s.empty() ? true : false;
}

int solution(string s) {
	int answer = 0;
	deque<char> arr;

	for (auto& ch : s) { arr.push_back(ch); }

	for (int i = 0; i < s.size(); i++) {
		if (check_stack(arr))
			answer++;

		char temp = arr.front();
		arr.pop_front();
		arr.push_back(temp);
	}

	return answer;
}