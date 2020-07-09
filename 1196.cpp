#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>
#include <algorithm>

using namespace std;


int main() {

	int n;
	cin >> n;
	unordered_set<int> s;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		s.insert(a);
	}
	int m, count = 0;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int a;
		cin >> a;
		if (s.find(a) != s.end()) count++;
	}

	
	cout << count;
	return 0;
}