#include <cmath>
#include <string>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct Player {
	string name;
	int score;
};

vector<Player> comparator(vector<Player> players) 
{
	return vector<Player>();
}

int main() 
{
	int n;
	cin >> n;
	vector< Player > players;
	for (int i = 0; i < n; i++) {
		string name;
		int score;
		std::cin >> name >> score;
		Player p1;
		p1.name = name, p1.score = score;
		players.push_back(p1);
	}

	vector<Player > answer = comparator(players);
	for (int i = 0; i < answer.size(); i++) {
		cout << answer[i].name << " " << answer[i].score << endl;
	}
	return 0;
}
