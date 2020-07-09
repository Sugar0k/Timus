#include <iostream>
#include <string>

const int len = 5;

using namespace std;

int main() {
	string a;
	cin >> a;

	if (a.length() < 10) {
		cout << stoi(a) % 7;
		return 0;
	}

	int f = 0, ans = 0;
	int br = 0;
	while (f + len < a.length()) {
		string newS = to_string(br) + a.substr(f, len);
		br = stoi(newS) % 7;
		f += len;
	} 
	br = stoi(to_string(br) + a.substr(f, a.length() - f)) % 7;

	cout << br;


	return 0;
}