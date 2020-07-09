#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	multimap<char, char> myMap;
	for (int i = 0; i < n; i++) {
		char a, b;
		cin >> a >> b;
		myMap.insert(pair<char, char>(a, b));
	}

	char c;
	cin >> c;
	auto range = myMap.equal_range(c);
	for (auto i = range.first; i != range.second; i++) {
		cout << i->first << i->second << endl;
	}


	return 0;
}