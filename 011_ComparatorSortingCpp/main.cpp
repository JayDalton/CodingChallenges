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

bool comparePlayer(const Player lhs, const Player rhs) 
{
	if (lhs.score < rhs.score)
	{
		return false;
	}
	else if (lhs.score > rhs.score)
	{
		return true;
	}
	else
	{
		return (lhs.name.compare(rhs.name) < 0) ? true : false;
	}
}

vector<Player> comparator(vector<Player> players) 
{
	sort(players.begin(), players.end(), comparePlayer);
	//for (auto p : players)
	//{
	//	cout << p.name << " " << p.score << endl;
	//}
	return players;
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
