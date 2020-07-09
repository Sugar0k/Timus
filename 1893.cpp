#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <iterator>

using namespace std;


int main() {

	string s;
	cin >> s;
	int num;
	char c;
	if (s[1] - '0' <= 9 && s[1] - '0' >= 0) {
		num = (int)(s[0] - '0') * 10 + (int)(s[1] - '0');
		c = s[2];
	} else num = (int)(s[0] - '0'), c = s[1];
	
	if (num < 3) {
		if (c == 'A' || c == 'D') cout << "window";
		else cout << "aisle";
		return 0;
	}

	if (num < 21) {
		if (c == 'A' || c == 'F') cout << "window";
		else cout << "aisle";
		return 0;
	}

	if (num < 66) {
		if (c == 'A' || c == 'K') cout << "window";
		else if (c == 'C' || c == 'D' || c == 'G' || c == 'H') {
			cout << "aisle";
		} else cout << "neither";
		return 0;
	}
	
	return 0;
}