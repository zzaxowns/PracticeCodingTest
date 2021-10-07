#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

int solution(vector<vector<int>> routes) {
	int answer = 0;
	stack<pair<int, int>> s;

	sort(routes.begin(), routes.end(), greater());

	for (int i = 0; i < routes.size(); i++) {
		s.push({ routes[i][0],routes[i][1] });
		cout << routes[i][0] << " " << routes[i][1] << endl;
	}



	while (!s.empty()) {
		pair<int, int> temp = s.top();
		s.pop();

		cout << temp.first << " " << temp.second << endl;

		if (temp.second > s.top().first) {
			pair<int, int> newTemp = { temp.first,s.top().second };
			s.pop();
			s.push(newTemp);
			continue;
		}

		s.pop();
		answer++;
	}

	return answer;
}