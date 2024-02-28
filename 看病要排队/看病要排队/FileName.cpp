#include<iostream>
using namespace std;
#include<queue>
#include<string>

//定义类型
struct node {
	//优先级
	int p;
	//身份ID
	int id;
	//自定义优先级
	//要按照自己写的顺序，n1在左，n2在右
	friend bool operator<(node n1, node n2) {
		if (n1.p != n2.p)
			return n1.p < n2.p;
		else
			return n1.id > n2.id;
	}

};

int main() {
	//创建优先队列
	priority_queue<node> q[3];
	//输入行数
	int n;
	//医生 优先级 医生
	int a, b, c;
	//一位病人
	node t;
	//in or out
	string str;
	while (true) {
		//病人的初始ID
		int m = 0;
		//输入行数
		cin >> n;
		//检验是否到文件尾
		if (n == EOF) break;
		for (int i = 0;i < n;i++) {
			//输入in or out
			cin >> str;
			//将病人归类给医生
			if (str == "IN") {
				scanf_s("%d%d", &a, &b);
				q[a - 1].push({ b,++m });
			}
			//医生就诊
			else if (str == "OUT") {
				scanf_s("%d", &c);
				if (!q[c - 1].empty()) {
					printf("%d\n", q[c - 1].top().id);
					q[c - 1].pop();
				}
				else printf("EMPTY\n");
			}
		}

	}
	return 0;
}