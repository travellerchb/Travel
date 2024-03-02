#include<iostream>
using namespace std;
#include<queue>
#include<cstring>

//创建数组，记录到达的位置，避免重复运算
const int maxn = 100001;
bool vis[maxn];

//创建新结构体，记录位置和步数
struct node {
	int n;
	int step;
};

int main() {
	queue<node>x;
	int n, k, m, s;
	while (cin >> n >> k) {
		//将数组元素全部为0
		memset(vis, 0, sizeof(vis));
		vis[n] = 1;
		node q = { n,0 };
		x.push(q);
		while (true) {
			//将队列首元素取出，其结果再输入队列
			m = x.front().n;
			s = x.front().step;
			x.pop();
			if (2 * m == k || m + 1 == k || m - 1 == k) break;
			else {
				if (!vis[2 * m]) {
					node v = { 2 * m,s + 1 };
					x.push(v);
					vis[2 * m] = 1;
				}
				if (!vis[m + 1]) {
					node v = { m + 1,s + 1 };
					x.push(v);
					vis[m + 1] = 1;
				}
				if (!vis[m - 1]) {
					node v = { m - 1,s + 1 };
					x.push(v);
					vis[m - 1] = 1;
				}
			}
		}
		cout << s + 1 << endl;
	}
	return 0;
}