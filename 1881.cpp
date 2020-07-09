#include <iostream>
#include <string>

using namespace std;

int main() {
	int h, w, n;
	int len = 0, str = 1;
	bool f = 0;
	cin >> h >> w >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s.size() + len + f <= w) {
			len += s.size() + f;
			f = 1;
		} else {
			str++;
			len = s.size();
			f = 1;
		}
	}
	if (str % h != 0) 	cout << str / h + 1;
	else cout << str / h;
	return 0;
}