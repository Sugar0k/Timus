#include <iostream>
#include <string>

using namespace std;

int main() {

	string s;
	char s1[200002];
	cin >> s;
	int p1 = 0, p2 = 1;
	s1[0] = s[0];
	while (true) {
		if (p2 > s.length()) break;
		if (s1[p1] == s[p2]) {
			if (p1 == 0) {
				s1[0] = s[++p2];
				p2++;
			} else {
				p1--;
				p2++;
			}
		} else {
			s1[++p1] = s[p2];
			p2++;
		}
	}
	for (int i = 0; i < p1; i++) cout << s1[i];
	return 0;
}