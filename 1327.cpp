#include <iostream>

using namespace std;

int main() {

	int a, b;

	cin >> a >> b;
	int ans = (b - a + 1) / 2;
	if (a % 2 != 0 && b % 2 != 0) ans++;
	cout << ans;	
	return 0;
}