#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<pair<int, int>> v;
	v.push_back({ 1,3 });
	v.push_back({ 7,10 });
	v.push_back({ 2,6 });
	v.push_back({ 15,20 });

	sort(v.begin(), v.end());

	stack<pair<int, int>> s;

	int len = v.size();

	for (int i = len - 1; i >= 0; i--) { s.push(v[i]); }

	while (!s.empty()) {
		pair<int, int> temp = s.top();
		s.pop();

		if (!s.empty() && s.top().first <= temp.second) {
			temp.second = s.top().second;
			s.pop();
			s.push(temp);
		}
		else {
			cout << temp.first << "~" << temp.second << endl;
		}
	}

	return 0;
}