#include<iostream>
using namespace std;
#include<queue>
#include<stack>

//记录计算过的排列
int vis[362881];
//节约算力，直接列出9！
int f[] = { 1,1,2,6,24,120,720,5040,40320,362880 };
//0的移动方向--左、上、右、下
int walk[4][4] = { {-1,0},{0,-1},{1,0},{0,1} };
const int Max_Step = 32;//最大搜索深度

//创建棋盘结构体
struct Chess {
	int chessnum[9];
	int value=0;
	Chess* Parent;//父节点
};

//打印棋盘
void PrintChess(struct Chess* TheChess){
	cout << "评估值为" << TheChess->value;
	for (int i = 0;i < 9;i++) {
		if (i % 3 == 0) {
			printf("\n");
		}
		printf("%d ", TheChess->chessnum[i]);
	}
	printf("\n\n");
}

//评估算法，以有多少个数不在目标位置为评估值，越大越不好
void Estimate(struct Chess* TheChess, struct Chess* Goal) {
	int num = 0;
	for (int i = 0;i < 9;i++) {
		if (TheChess->chessnum[i] != Goal->chessnum[i]) num++;
	}
	TheChess->value = num;
}

//在堆区开辟一个地方存储新的棋盘，移动棋子位置，返回地址
struct Chess* MoveChess(struct Chess* TheChess, int i){
	struct Chess* NewChess;
	NewChess = new Chess;
	int z = 0;
	for (int i = 0;i < 9;i++) {
		if (TheChess->chessnum[i] == 0) {
			z = i;
			break;
		}
	}
	int x1 = z % 3;
	int y1 = z / 3;
	int x2, y2;
	x2 = x1 + walk[i][0];
	y2 = y1 + walk[i][1];
	if (x2 >= 0 && x2 < 3 && y2 >= 0 && y2 < 3) {
		int nz = x2 + y2 * 3;
		for (int i = 0;i < 9;i++) {
			NewChess->chessnum[i] = TheChess->chessnum[i];
		}
		NewChess->chessnum[z] = TheChess->chessnum[nz];
		NewChess->chessnum[nz] = TheChess->chessnum[z];
	}
	return NewChess;
}

//康托展开，将大数压缩排列
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


void bfs(struct Chess* Begin, struct Chess* Goal) {
	memset(vis, 0, sizeof(vis));
	//p1存储从队列取出的棋盘
	//p2存储变化后的新棋盘
	//p存储最终棋盘
	Chess* p1, * p2, * p;
	p2 = new Chess;
	int Step = 0;//深度
	p = NULL;
	queue<Chess*>q;
	q.push(Begin);
	while (p == NULL ||!q.empty()) {
		p1 =q.front();
		q.pop();
		for (int i = 0;i < 4;i++) {
			p2 = MoveChess(p1, i);
			Estimate(p2, Goal);
			if (p2->value <= p1->value&& cantor(p2->chessnum)) {
				p2->Parent = p1;
				q.push(p2);
				if (p2->value == 0)//搜索完成
				{
					p = p2;
				}
			}
			//若评估值不满意，则删除节点
			else
			{
				delete p2;//为劣质节点则抛弃
				p2 = NULL;
			}
		}
		Step++;
		if (Step > Max_Step)
			p=NULL;
	}
	//创建栈，倒着存储路径，利用栈的特点输出结果
	stack<Chess*>s;
	s.push(p);
	Chess* p3 = p;
	while (p3->Parent != NULL) {
		p3 = p3->Parent;
		s.push(p3);
	}
	while (s.size()) {
		PrintChess(s.top());
		s.pop();
	}
}

int main() {
	Chess Goal;
	Chess* Begin;
	Begin = new Chess;
	for (int i = 0;i < 9;i++) {
		scanf_s("%d", &Begin->chessnum[i]);
	}
	for (int i = 0;i < 9;i++) {
		scanf_s("%d", &Goal.chessnum[i]);
	}
	Estimate(Begin, &Goal);
	Begin->Parent = NULL;
	Goal.value = 0;
	printf("%s","初始棋盘:");
	PrintChess(Begin);
	printf("%s", "目标棋盘:");
	PrintChess(&Goal);
	bfs(Begin, &Goal);
	return 0;
}