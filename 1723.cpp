#include <string>
#include <iostream>

using namespace std;

int main() {
	string s;
	int max = 0;
	cin >> s;
	char a;
	for (int i = 0; i < s.size(); i++) {
		char c;
		c = s[i]; 
		int count = 0;
		for (int j = 0; j < s.size(); j++) {
			if (s[j] == c) count++;
		}
		if (max <= count) {
			max = count;
			a = c;
		}
	}
	cout << a;
	return 0;
}