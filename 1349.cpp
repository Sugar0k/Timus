#include <iostream>
#include <vector>
#include <math.h>

using namespace std;


int main() {

	int n;
	cin >> n;
	//cout << (int)pow(n, 10);
	for (int i = 1; i < 100; i++) {
		if ((int)pow(i, n) + (int)pow(i + 1, n) == (int)pow(i + 2, n)) {
			cout << i << " " << i + 1 << " " << i + 2;
			return 0;
		}
	}
	cout << -1;
	system("pause");
	return 0;
}