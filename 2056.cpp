#include <iostream>

using namespace std;

int main() {
	int n; 
	cin >> n;
	int sum = 0;

	for (int i = 0; i < n; i++) {
		int temp; 
		cin >> temp;
		if (temp == 3) {
			cout << "None";
			return 0;
		}
		sum += temp;
	}

	if ((double)sum / n == 5) cout << "Named";
	else if ((double)sum / n >= 4.5) cout << "High";
	else cout << "Common";


	return 0;
}