#include<iostream>
using namespace std;
#include<algorithm>

void print_permutation(int a[4]) {
	cout << endl;
	int b;
	sort(a, a + 4);
	if (a[0] != 0) {
		for (int j = 0;j < 4;j++) {
			cout << a[j];
		}
	}
	b = a[0];
	while (next_permutation(a, a + 4)) {
		if (b != a[0]) {
			cout << endl;
			b = a[0];
		}
		for (int j = 0;j < 4;j++) {
			if (a[0] == 0) break;
			cout << a[j];
		}
		cout << " ";
	}
	cout << endl << endl;
}

int main() {
	int a[4];
	while (true) {
		for (int i = 0;i < 4;i++) cin >> a[i];
		if (a[0] == 0&& a[1] == 0&& a[2] == 0&& a[3] == 0) break;
		print_permutation(a);
	}
	return 0;
}