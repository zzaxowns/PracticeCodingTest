#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int num = 1;
vector<string> alpha = { "A", "E","I","O", "U" };
unordered_map<string, int> book;

void dfs(string str) {
	if (str.length() > 5) return;

	book[str] = num++;
	for (auto alphabet : alpha) { dfs(str + alphabet); }
}

int solution(string word) {
	for (auto alphabet : alpha) { dfs(alphabet); }

	return book[word];
}