#include<iostream>
using namespace std;
#include<queue>
#include<cstring>

const int maxn = 100001;
bool vis1[maxn];//记录素数
bool vis2[maxn];//记录变过的数

struct node {
	int c;
	int count;
};

int main() {
	//先将数组全赋值为1
	memset(vis1, 1, sizeof(vis1));
	//将不是素数的标记出来
	for (int i = 1;i <= maxn - 1;i++) {
		for (int j = 2;j < i;j++) {
			if (i % j == 0) {
				vis1[i] = 0;
				break;
			}
		}
	}
	//创建队列
	int s, n;
	node p;
	node m;
	int a[4];
	while (cin >> s >> n) {
		//因为队列没有一键清除的功能，所以连续计算队列里会有残余垃圾，故创建在循环里
		queue<node>q;
		//将记录清空
		memset(vis2, 0, sizeof(vis2));
		//次数清空
		p.count = 0;
		p.c = s;
		//标记是否符合
		int flag = 0;
		//存储
		q.push(p);
		while (!q.empty()) {
			p = q.front();
			m = p;
			q.pop();
			//检测是否符合
			if (p.c == n) {
				cout << p.count << endl;
				break;
			}
			a[0] = p.c / 1000;
			a[1] = p.c % 1000 / 100;
			a[2] = p.c % 100 / 10;
			a[3] = p.c % 10;
			//改变一位数就存储
			m.count++;
			for (int i = 0;i < 4;i++) {
				int orgin_place = a[i];
				for (int j = 0;j < 10;j++) {
					if (i == 0 && j == 0)//千位不为零
						continue;
					if (j == a[i])
						continue;
					a[i] = j;
					int temp = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
					if (vis1[temp] == 1 && vis2[temp] == 0) {
						m.c = temp;
						q.push(m);
						vis2[temp] = 1;
						if (temp == n) {
							cout << m.count << endl;
							flag = 1;//符合退出，节约算力
							break;
						}
					}
				}
				//回复被修改的数
				a[i] = orgin_place;
				if (flag == 1) {
					break;
				}
			}
			if (flag == 1) {
				break;
			}

		}

	}
	return 0;
}