#include <iostream>

using namespace std;

int main() {
	
	int t1, t2;
	cin >> t1 >> t2;
	int prob = 0;
	for (int i = 0; i < 10; i++) {
		int a;
		cin >> a;
		prob += a;
	}
	if (t1 <= t2 - prob * 20) cout << "No chance.";
	else cout << "Dirty debug :(";
	return 0;
}