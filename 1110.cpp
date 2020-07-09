#include <iostream>
#include <vector>
#include <math.h>

using namespace std;


short n, m, y;

int gcd(int a, int b) { 
	if (a == 0)
		return b;
	if (b == 0)
		return a;

	if (a == b)
		return a;

	if (a > b)
		return gcd(a - b, b);
	return gcd(a, b - a);
}

int eulerPhi(int m) {
	int i = 0;
	for (int j = 0; i < m; j++) if (gcd(m, j) == 1) i++;
	return i;
}

int bin(int x, int st) {
	if (x % m == 1) st = st % eulerPhi(m);
	int res = 1;
	for (; st > 0;) {
		if (st & 1) 
			res = (res * x) % m;
		x = (x * x) % m;
		st >>= 1;
	}
	return res;
}

int main() {
	
	bool b = false;
	cin >> n >> m >> y;
	for (short i = 1; i < m; i++) {
		if (bin(i, n) == y) {
			b = true;
			cout << i << " ";
			continue;
		}
	}
	if (!b) cout << -1;

	system("pause");
	return 0;
}