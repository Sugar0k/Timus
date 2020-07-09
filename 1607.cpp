#include <iostream>
#include <string>

using namespace std;

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;


	while (1) {
		if (a > c) {
			cout << a;
			return 0;
		}
		a += b;
		if (a > c) {
			cout << c;
			return 0;
		}
		c -= d;
	}


	

	return 0;
}