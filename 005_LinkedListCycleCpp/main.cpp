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

struct Node {
	int data;
	struct Node* next;
};

/*
	Floyd’s Cycle-Finding Algorithm
	tortoise and the hare algorithm
	Hase-Igel-Algorithmus
*/

bool has_cycle(Node* head) 
{
	struct Node *slow_p = head, *fast_p = head;
	while (slow_p && fast_p && fast_p->next)
	{
		slow_p = slow_p->next;
		fast_p = fast_p->next->next;
		if (slow_p == fast_p)
		{
			//std::cout << "Found Loop" << std::endl;
			return true;
		}
	}
	return false;
}

int main() {

	Node* root = new Node{ 1, new Node{2, new Node{3, new Node{4}}} };

	if (has_cycle(root))
		cout << "1\n";
	else
		cout << "0\n";
	return 0;
}
