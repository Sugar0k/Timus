#include <iostream>
#include <string>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	if (a <= b)
		std::cout << 40 * 2 + 2 * (b - 40) + 40;

	if (a > b)
		std::cout << (40 - 1) * 2 + 40 + 2 * (a - 40) + 1;

	return 0;
}