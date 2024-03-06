#include<iostream>
using namespace std;
#include<queue>
#include<cstring>

const int maxn = 100001;
bool vis1[maxn];//记录素数
bool vis2[maxn];//记录变过的数

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
	queue<int>q;
	int s, n;
	int p;
	int a[4];
	while (cin >> s >> n) {
		//将记录清空
		memset(vis2, 0, sizeof(vis2));
		//次数清空
		int count = 0;
		//存储
		q.push(s);
		while (!q.empty()) {
			int remain = q.size();
			while (remain--) {
				//将数取出后删除
				p = q.front();
				q.pop();
				//检测是否符合
				if (p == n) {
					cout << count << endl;
					break;
				}
				a[0] = p / 1000;
				a[1] = p % 1000 / 100;
				a[2] = p % 100 / 10;
				a[3] = p % 10;
				//改变一位数就存储
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
							q.push(temp);
							vis2[temp] = 1;
						}
					}
					//回复被修改的数
					a[i] = orgin_place;
				}
			}
			++count;
		}

	}
	return 0;
}