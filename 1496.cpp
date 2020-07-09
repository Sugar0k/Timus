#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <iterator>

using namespace std;


int main() {

	int n;
	cin >> n;
	map<string, int> myMap;
	for (int i = 0; i < n; i++) {
		string a;
		cin >> a;
		if (myMap.find(a) != myMap.end()) {
			myMap.find(a)->second++;
			continue;
		}
		myMap.insert(make_pair(a, 1));
	}

	for (auto i = myMap.begin(); i != myMap.end(); i++) {
		if (i->second > 1) {
			cout << i->first << endl;
		}
	}	

	return 0;
}