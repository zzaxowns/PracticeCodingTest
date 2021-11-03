#include <iostream>
#include <list>
#include <string>

using namespace std;

static int wait_Num = 1;

enum Grade {
	normal,
	VIP
};

struct Player {
	int num;
	Grade grade;
	string name;
};

void add_Sample(list<Player>& Line) {
	Line.push_back({ wait_Num++,normal, "ID1234" });
	Line.push_back({ wait_Num++,normal, "ID2345" });
	Line.push_back({ wait_Num++,normal, "ID3456" });
}

void printList(list<Player>& Line, list<Player>& Line_VIP) {

	for (auto info : Line_VIP) {
		cout << "Nummber: " << info.num << " Name: " << info.name << endl;
	}

	if (!Line_VIP.empty()) { cout << "=============VIP============" << endl; }

	for (auto info : Line) {
		cout << "Nummber: " << info.num << " Name: " << info.name << endl;
	}
}

void add_Wait_Line(Player p, list<Player>& Line) {
	Line.push_back({ p });
}

int main() {

	list<Player> wait_Line;
	list<Player> wait_Line_VIP;

	add_Sample(wait_Line);

	cout << "=======현재 대기열========" << endl;
	printList(wait_Line, wait_Line_VIP);

	while (!wait_Line.empty()) {

		short temp = 0;
		cout << "대기열에 추가될 사람이 있습니까? (Yes:1 / No: another Nummber) >>>";

		cin >> temp;

		if (temp == 1) {

			Player player;

			player.num = wait_Num++;
			cout << "ID >>>";
			cin >> player.name;
			cout << "Grade >>> (VIP : 1 / Another: normal)";
			cin >> temp;
			temp = temp == 1 ? 1 : 0;
			player.grade = Grade(temp);

			if (temp == 1) {
				add_Wait_Line(player, wait_Line_VIP);
			}
			else {
				add_Wait_Line(player, wait_Line);
			}

			cout << "=======현재 대기열========" << endl;
			printList(wait_Line, wait_Line_VIP);

		}
		else {

			if (!wait_Line_VIP.empty()) {
				wait_Line_VIP.pop_front();
			}
			else {
				wait_Line.pop_front();
			}

			cout << "=======현재 대기열========" << endl;
			printList(wait_Line, wait_Line_VIP);
		}
	}

	return 0;
}