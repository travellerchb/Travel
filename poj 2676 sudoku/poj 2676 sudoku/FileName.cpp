#include<iostream>
using namespace std;
#include<cstring>

int sudo[10][10];//储存输入和结果
bool row[10][10];//标记该数在此行是否已经存在
bool column[10][10];//标记该数在此列是否已经存在
bool grid[10][10];//标记该数是否在此小九宫格中已经存在


//检测函数，判断是否符合条件
bool check(int r, int j,int n) {
	if (row[n][r] == 1 || column[n][j] == 1|| grid[n][(r / 3) * 3 + j / 3+1]==1)
		return false;
	return true;
}


int DFS(int r,int j) {
	//如果已经计算完成，返回1表示不用回溯
	if (r == 10) {
		return 1;
	}
	//用于记录是否要回溯
	int f = 0;

	if (sudo[r][j]) {
		if (j == 9) {
			//换行
			f = DFS(r + 1, 1);
		}
		else {
			//换列
			f = DFS(r, j + 1);
		}
		//判断是否要回溯
		// 1 表示不用
		// 0 表示要
		if (f) {
			return 1;
		}
		else {
			return 0;
		}
	}
	else {
		//从1开始穷举
		for (int n = 1;n < 10;n++) {
			if (check(r, j, n)) {
				//记录
				row[n][r] = 1;
				column[n][j] = 1;
				grid[n][(r / 3) * 3 + j / 3+1] == 1;
				sudo[r][j] = n;
				if (j == 9) {
					//换行
					f = DFS(r + 1, 1);
				}
				else {
					//换列
					f = DFS(r, j + 1);
				}
				if (f) {
					return 1;
				}
				else {
					//如果回溯，删除标记
					row[n][r] = 0;
					column[n][j] = 0;
					grid[n][(r / 3) * 3 + j / 3+1] == 0;
					sudo[r][j] = 0;
				}

			}

		}
	}
	//如果穷举结束仍等不到结果，回溯
	return 0;
}

int main() {
	int t = 0;
	cin >> t;
	char sudu;
	while (t) {
		t--;
		//所有数组清零
		memset(row, 0, sizeof(row));
		memset(column, 0, sizeof(column));
		memset(grid, 0, sizeof(grid));
		memset(sudo, 0, sizeof(sudo));
		for (int i = 1;i < 10;i++) {
			for (int j = 1;j < 10;j++) {
				cin >> sudu;
				sudo[i][j] = sudu - '0';
				row[sudo[i][j]][i] = 1;
				column[sudo[i][j]][j] = 1;
				grid[sudo[i][j]][(i/3)*3 + j / 3] == 1;
			}
		}

		//最开始之所以等不到答案，就是这个原因

		/*解释一下为什么是（r+j/3）
			i    i/3    j   j/3   
			0     0     0    0     
			1     0     1    0     
			2     0     2    0     
			3     1     3    1     
			4     1     4    1     
			5     1     5    1    
			6     2     6    2     
			7     2     7    2     
			8     2     8    2     
			9     3     9    3       

		  令a=i/3，b=j/3

		    a     b     gird
			0     0      0
			0     1      1
			0     2      2
			1     0      3
			1     1      4
			1     2      5
			2     0      6
			2     1      7
			2     2      8
			
			可知gird=（i/3）*3+（j/3）
			*/

		//从1,1开始
		DFS(1, 1);
		cout << endl;
		for (int i = 1;i < 10;i++) {
			for (int j = 1;j < 10;j++) {
				cout << sudo[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}