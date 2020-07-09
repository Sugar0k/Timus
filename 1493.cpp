#include <iostream>
#include <string>
using namespace std;

int main() {
	int a;
	cin >> a;
	string temp = to_string(a - 1);
	while (temp.length() != 6) {
		temp = '0' + temp;
	}
	if (temp[0] + temp[1] + temp[2] == temp[3] + temp[4] + temp[5]) {
		cout << "Yes";
		return 0;
	}

	temp = to_string(a + 1);
	
	while (temp.length() != 6) {
		temp = '0' + temp;
	}
	if (temp[0] + temp[1] + temp[2] == temp[3] + temp[4] + temp[5]) {
		cout << "Yes";
		return 0;
	}

	cout << "No";

	return 0;
}