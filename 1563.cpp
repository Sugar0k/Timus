#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() {
	unordered_set<string> set;
	int n, ans = 0;
	cin >> n;
	cin.ignore(1);
	for (int i = 0; i < n; i++) {
		string s;
		getline(cin, s);
		if (set.find(s) == set.end()) {
			ans++;
			set.insert(s);
		}
	}
	cout << n - ans;
	return 0;
}