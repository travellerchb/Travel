#include<iostream>
using namespace std;
#include<cstring>
#define ll long long

//num存储过程，toto存储答案
int num[1010], toto[1010];
//lim存储最大深度，flag判断是否存在答案
int lim, flag;


ll gcd(ll mol, ll den) { 
	return den == 0 ? mol : gcd(den, mol % den); 
}


//dep为当前深度，mol为分子，den为分母，pre为前一个加数的分母
void dfs(ll dep, ll mol, ll den, ll pre) {
	//判断是否到达深度底
	if (dep == lim + 1) {
		//分子是否为0，即所有加数和为所求
		if (mol == 0) {
			//如果最后一个加数比之前的答案大
			//或暂无存储答案
			if (num[lim] < toto[lim]||toto[lim]==0) {
				for (ll i = 0;i < dep;i++) {
					toto[i] = num[i];
				}
			}
			//标记存在答案
			flag = true;
		}
		return;
	}
	//要满足所有加数递增i>(pre-1)
	//den/mol得出满足1/c>=mol/den的最小c值
	for (int i = max(pre, den / mol);;i++) {
		//原式为(lim - dep + 1)/i<mol/den
		//若后续全为1/i，加数和小于所求，则无需再算，排除
		if (den * (lim - dep + 1) < i * mol) {
			break;
		}
		//记录过程
		num[dep] = i;
		//编译器的“/”只能整除，故有以下算法，排除整除的影响，直接算出结果
		//我不清楚此算法叫什么名字
		ll mol2 = mol * i - den;
		ll den2 = den * i;
		ll g = gcd(mol2, den2);
		dfs(dep + 1, mol2/g, den2/g, i+1);
	}
	return;
}


int main() {
	flag = false;
	int a, b;
	cin >> a >> b;
	memset(num, 0, sizeof(num));
	memset(toto, 0, sizeof(toto));
	//无需考虑加数多少的问题
	//因为得出的答案加数一定最少（从深度为1开始运行）
	for (lim = 1;;lim++) {
		//初始深度为1，前分母为1
		dfs(1, a, b, 1);
		if (flag) break;
	}
	for (int i = 1;i <= lim;i++) {
		cout << toto[i] << " ";
	}
	return 0;
}