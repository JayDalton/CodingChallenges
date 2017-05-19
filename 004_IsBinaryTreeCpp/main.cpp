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
	Node* left;
	Node* right;
};

bool IsSubtreeLesser(Node* root, int value)
{
	if (root == nullptr) return true;
	if (root->data < value
		&& IsSubtreeLesser(root->left, value)
		&& IsSubtreeLesser(root->right, value))

		return true;
	else
		return false;
}

bool IsSubtreeGreater(Node* root, int value)
{
	if (root == nullptr) return true;
	if (value < root->data
		&& IsSubtreeGreater(root->left, value)
		&& IsSubtreeGreater(root->right, value))

		return true;
	else
		return false;
}

bool IsBinarySearchTree(Node* root, int minValue, int maxValue) 
{
	if (root == nullptr) { return true; }
	if (minValue < root->data && root->data < maxValue
		&& IsBinarySearchTree(root->left, minValue, root->data)
		&& IsBinarySearchTree(root->right, root->data, maxValue)
	)
		return true;
	else
		return false;
}

bool checkBST(Node* root) {

	//if (root == nullptr) return true;
	//if (IsSubtreeLesser(root->left, root->data)
	//	&& IsSubtreeGreater(root->right, root->data)
	//	&& checkBST(root->left) && checkBST(root->right))
	//	return true;
	//else
	//	return false;

	return IsBinarySearchTree(root,
		std::numeric_limits<int>::min(), 
		std::numeric_limits<int>::max()
	);
}

int main() {

	Node* root = new Node{4,
		new Node{2,
			new Node{1},
			new Node{3}
		},
		new Node{6,
			new Node{5},
			new Node{7}
		}
	};


	if (checkBST(root))
		cout << "Yes\n";
	else
		cout << "No\n";
	return 0;
}
