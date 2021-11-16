#include<iostream>
#include<queue>
#include<vector>
#include<utility>

using namespace std;
vector<vector<int>> graphs(12, vector<int>(0, 0));
vector<bool> check_Node(12, false);
int target = 3;

void make_graphs() {
	graphs[1].push_back(2);
	graphs[1].push_back(3);
	graphs[2].push_back(7);
	graphs[2].push_back(4);
	graphs[3].push_back(8);
	graphs[4].push_back(5);
	graphs[4].push_back(6);
	graphs[5].push_back(6);
	graphs[5].push_back(10);
	graphs[6].push_back(10);
	graphs[7].push_back(6);
	graphs[7].push_back(9);
	graphs[8].push_back(7);
	graphs[8].push_back(9);
	graphs[8].push_back(10);
	graphs[9].push_back(11);
	graphs[10].push_back(11);
}
int main() {
	queue<pair<int, int>> table;
	int size = 11;
	int answer = 0;

	make_graphs();
	table.push({ 1,0 });
	check_Node[1] = true;

	while (!table.empty()) {
		pair<int, int> temp = table.front();
		table.pop();

		if (temp.first == target) {
			answer = temp.second;
			break;
		}

		for (auto num : graphs[temp.first]) {
			if (!check_Node[num]) {
				table.push({ num,temp.second + 1 });
				check_Node[num] = true;
			}
		}

	}

	cout << target << " 까지 가는 최소 거리 " << answer << endl;

	return 0;
}