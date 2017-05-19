#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool is_prime(unsigned int n)
{
	if (n <= 1) return false;
	if (n == 2) return true;
	for (unsigned int i = 2; i <= std::sqrt(n); ++i)
		if (n % i == 0)
			return false;
	return true;
}

int main() {
	int n;
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		int number;
		std::cin >> number;
		bool answer = is_prime(number);
		if (answer)
			std::cout << "Prime" << std::endl;
		else std::cout << "Not prime" << std::endl;
	}

	return 0;
}
