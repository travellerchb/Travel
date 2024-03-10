#include<iostream>
using namespace std;
#include<queue>
#include<string>
#define x 0;//定义x为0


int vis[362881];//记录所有全排列
int start[9];//记录初始输入
int goal[9];//记录目标输入
long int f[] = { 1,1,2,6,24,120,720,5040,40320,362880 };//提前把9！给算出来，节约算力、时间

//创建新结构体，记录状态和改变的过程
struct node {
	int a[9];
	string b;
};

//按照顺时针——左、上、右、下
int dis[4][4] = { {-1,0},{0,-1},{1,0},{0,1} };

//康托展开
int cantor(int str[]) {
	int res = 0;
	for (int i = 0;i < 9;i++) {
		int count = 0;
		for (int j = i + 1;j < 9;j++) {
			if (str[i] > str[j]) ++count;//记录当前小于此位数的数量
		}
		res += count * f[9 - i - 1];//累加所有的可能，计算出此时的序列排第几
	}
	if (!vis[res]) {//在相应的位置记录该状态已出现，节约算力
		vis[res] = 1;
		return 1;
	}
	return 0;
}

node bfs() {
	queue<node>q;
	node p;
	//复制
	memcpy(p.a, start, sizeof(start));
	q.push(p);
	while (!q.empty()) {
		p = q.front();
		q.pop();
		if (memcmp(p.a, goal, sizeof(goal)) == 0) {//比较是否符合
			return p;
		}
		int z = 0;
		for (int i = 0;i < 9;i++) {
			if (p.a[i] == 0) {
				z = i;//找到此时x的位置
				break;
			}
		}
		//左上角坐标为（0,0）
		//计算初始坐标
		int x1 = z % 3;
		int y1 = z / 3;
		int x2 = 0;
		int y2 = 0;
		for (int i = 0;i < 4;i++) {
			//依次进行改变
			x2 = x1 + dis[i][0];
			y2 = y1 + dis[i][1];
			if (x2 >= 0 && x2 < 3 && y2 >= 0 && y2 <= 3) {//判断是否超出坐标范围
				int z2 = y2 * 3 + x2;//重新计算x的位置
				node m = p;
				swap(m.a[z], m.a[z2]);//将x移动到目标位置
				if (cantor(m.a)) {//判重，记录改变过程
					if (i == 0) m.b += 'l';
					else if (i == 1) m.b += 'u';
					else if (i == 2) m.b += 'r';
					else m.b += 'd';
					q.push(m);
				}
			}
		}
	}
	node m;
	m.b = "unsolvable";
	return m;
}
int main() {
	memset(vis, 0, sizeof(vis));
	char ch;
	for (int i = 0;i < 9;i++) {
		
		scanf_s("%c", &ch);
		getchar();
		if (ch == 'x') start[i] = 0;
		else start[i] = ch - '0';
	}
	for (int i = 0;i < 9;i++) {
		scanf_s("%c", &ch);
		getchar();
		if (ch == 'x') goal[i] = 0;
		else goal[i] = ch - '0';
	}
	cantor(start);//标记初始位置
	node c = bfs();
	cout << c.b << endl;
	return 0;
}