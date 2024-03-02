#include<iostream>
using namespace std;


void print_subset(int n) {
	for (int i = 0;i < (1 << n);i++) {
		//（1<<n）计算出有多少种组合
		for (int j = 0;j < n;j++) {
			if (i & (1 << j)) {
				//&只有两数为1才为1
				//i为子集的二进制，由低位到高位第几位为1，就打印几
				//二进制全为0则为空集，不打印
				cout << j << " ";
			}
		}
		cout << endl;
	}
}
int main() {
	int n;//集合中元素的总数
	cin >> n;
	print_subset(n);
	return 0;
}