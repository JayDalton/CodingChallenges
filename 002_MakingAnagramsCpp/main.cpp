#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int number_needed(string a, string b) {
	std::unordered_map<char, unsigned int> mapA;
	for (auto const& x : a) { mapA[x] += 1; }
	std::unordered_map<char, unsigned int> mapB;
	for (auto const& x : b) { mapB[x] += 1; }

	unsigned int result = 0;
	for (auto const& x : mapA)
	{
		auto r = mapB.find(x.first);
		if (r != mapB.end())
		{
			result += std::max(r->second, x.second) - std::min(r->second, x.second);
		}
		else {
			result += x.second;
		}
	}

	for (auto const& x : mapB)
	{
		if (mapA.find(x.first) == mapA.end())
		{
			result += x.second;
		}
	}

	return result;
}

int main() {
	string a;
	cin >> a;
	string b;
	cin >> b;
	cout << number_needed(a, b) << endl;
	return 0;
}


