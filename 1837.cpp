#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <iterator>
#include <queue>

using namespace std;





int main() {

	int n;
	cin >> n;
	stringstream ss;
	map<string, int> m;
	map<int, string> m1;
	vector<vector<int>> gr;

	
	for (int i = 0, temp = -1; i < n; i++) {
		int a, b, c;
		string s;
		cin >> s;
		if (m.find(s) == m.end()) {
			m.insert(make_pair(s, ++temp));
			m1.insert(make_pair(temp, s));
			a = temp;
		} else {
			a = m.find(s)->second;
		}
		cin >> s;
		if (m.find(s) == m.end()) {
			m.insert(make_pair(s, ++temp));
			m1.insert(make_pair(temp, s));
			b = temp;
		} else {
			b = m.find(s)->second;
		}
		cin >> s;
		if (m.find(s) == m.end()) {
			m.insert(make_pair(s, ++temp));
			m1.insert(make_pair(temp, s));
			c = temp;
		} else {
			c = m.find(s)->second;
		}
		if (gr.size() < temp + 1) {
			gr.resize(temp + 1);
			for (int i = 0; i < temp + 1; i++) {
				gr[i].resize(temp + 1, 0);
			}
		}

		gr[a][b] = gr[b][a] = 1;
		gr[b][c] = gr[c][b] = 1;
		gr[c][a] = gr[a][c] = 1;

	}
	n = gr.size();

	queue<pair<int,int>> que;
	vector<int> nodes;
	nodes.resize(n, -2);
	if (m.find("Isenbaev") != m.end()) {
		que.push(make_pair(m.find("Isenbaev")->second, 0));
	}
	
	map<string, int> counts;

	while (!que.empty()) { // ���� ������� �� �����
		pair<int, int> a = que.front(); // ��������� �������
		int node = a.first;
		que.pop();
		nodes[node] = a.second; // �������� �� ��� ����������
		for (int j = 0; j < n; j++) { // ��������� ��� ��� ��� ������� �������
			if (gr[node][j] == 1 && nodes[j] == -2) { // ���� ������� ������� � �� ����������
				que.push(make_pair(j, a.second + 1)); // ��������� �� � �������
				nodes[j] = -1; // �������� ������� ��� ������������
			}
		}
		counts.insert(make_pair(m1.find(node)->second, a.second));
	}
	for (int i = 0; i < n; i++) {
		if (nodes[i] == -2) {
			counts.insert(make_pair(m1.find(i)->second, -2));
		}
	}
	map<string, int>::iterator it;
	for (it = counts.begin(); it != counts.end(); it++) {
		cout << it->first << ' ';
		if (it->second == -2) cout << "undefined" << endl;
		else cout << it->second << endl;
	}




	
	
	return 0;
}