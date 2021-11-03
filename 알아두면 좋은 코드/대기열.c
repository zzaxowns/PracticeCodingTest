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

void add_Sample(list<Player> Line) {
	Line.push_back({ wait_Num++,normal, "Kim" });
	Line.push_back({ wait_Num++,normal, "Park" });
	Line.push_back({ wait_Num++,normal, "Lee" });
}

void printList(list<Player> Line) {
	for (auto info : Line) {
		cout << "Nummber: " << info.num << " Name: " << info.name << endl;
	}
}

int main() {

	list<Player> wait_Line;

	add_Sample(wait_Line);
	printList(wait_Line);

	return 0;
}