#include<iostream>
using namespace std;
#include<vector>

int main() {
	vector<int>table;
	int n, m;
	while (cin >> n >> m) {
		table.clear();
		for (int i = 0;i < 2 * n;i++) {
			table.push_back(i);
		}
		int pos = 0;
		for (int i = 0;i < n;i++) {
			pos = (pos + m - 1) % table.size();
			table.erase(table.begin() + pos);
		}
		int j = 0;
		for (int i = 0;i < 2 * n;i++) {
			if (i % 50 == 0 && i) cout << endl;
			if(j < table.size() && (i == table[j])) {
				j++;
				cout << "G";
			}
			else cout << "B";
		}
		cout << endl << endl;
	}
	return 0;
}