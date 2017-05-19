#include <iostream>

using namespace std;

int fibonacci_recursive(int n) 
{
	if (n == 0) return 0;
	if (n == 1) return 1;
	return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

int fibonacci(int n) 
{
	if (n == 0) return 0;
	if (n == 1) return 1;

	unsigned int ret;
	unsigned int h1 = 0;
	unsigned int h2 = 1;

	for (unsigned int i = 1; i < n; ++i) {
		ret = h1 + h2;
		h1 = h2;
		h2 = ret;
	}

	return ret;
}

int main() {
	int n;
	cin >> n;
	cout << fibonacci(n);
	return 0;
}
