#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int login();//登陆界面
int user();//用户名和密码
int num1();//图书销售管理系统
int num11();//图书销售管理系统>会员管理
int num111();//图书销售管理系统 > 会员信息管理 > 显示会员信息
int num112();//图书销售管理系统 > 会员信息管理 > 新增会员信息
int num113();//图书销售管理系统 > 会员信息管理 >修改会员信息
int num12();//图书销售管理系统 >书籍管理
int num121();//图书销售管理系统>书籍管理>书籍列表
int num122();//图书销售管理系统 >书籍管理>添加书籍
int num123();//图书销售管理系统 >书籍管理>书籍下架
int num13();//图书销售管理系统 >购物结算


//会员信息
struct id
{
	int s;
	char name[30];
	int money;
};

struct id id1[20] = { 1,"张三",100 ,2,"李四",600 ,3,"王五",500 ,4,"陆六",1000 ,5,"钱七",900 ,6,"大强",100 ,7,"小丽",100 ,8,"敏敏",100 };
id2 = 8;

//书籍信息
struct books
{
	int s;
	char book[30];
	int money;
};

struct books book1[20] = { 1,"C#2.0宝典",88 ,2,"Java编程基础",55 ,3,"J2SE桌面应用程序开发",60 ,4,"数据库设计和应用",45 ,5,"水浒伟",55 ,6,"红楼梦",68 ,7,"三国演义",78 ,8,"地心游记",29 };
book2 = 8;


int main()
{
	int flag = 0;
	while (1)
	{
		flag = login();
		if (flag == 2)
		{
			break;
		}
		flag = user();
		if (flag == 0)
		{
			break;
		}
		printf("登录成功！\n");
		printf("\n");
		while (1)
		{
			flag = num1();
			if (flag == 1)
			{
				while (1)
				{
					flag = num11();
					if (flag == 1)
					{
						num111();
					}
					else if (flag == 2)
					{
						num112();
					}
					else if (flag == 3)
					{
						num113();
					}
					else if (flag == 4)
					{
						break;
					}
				}
			}
			else if (flag == 2)
			{
				while (1)
				{
					flag = num12();
					if (flag == 1)
					{
						num121();
					}
					else if (flag == 2)
					{
						num122();
					}
					else if (flag == 3)
					{
						num123();
					}
					else if (flag == 4)
					{
						break;
					}
				}
			}
			else if (flag == 3)
			{
				num13();
			}
			else if (flag == 4)
			{
				break;
			}
		}
	}
	return 0;
}


//登陆界面
int login()
{
	int n = 0;
	char ch;
	while (1)
	{
		printf("******************************\n");
		printf("*      图书销售管理系统      *\n");
		printf("*         1.登录             *\n");
		printf("*         2.退出             *\n");
		printf("******************************\n");
		printf("请选择，输入数字（1-2）：");
		scanf("%d", &n);
		if (n >= 1 && n <= 2)
		{
			break;
		}
		else
		{
			printf("\n");
			printf("输入错误，请重新输入\n");
			while ((ch = getchar()) != EOF && ch != '\n');
		}
	}
	printf("\n");
	return n;
}


//用户名和密码
int user()
{
	int i = 3;
	char ch;
	char name[10] = "admin";
	int password = 123456;
	char names[10] = "";
	int passwords = 0;
	while (i)
	{
		printf("\n");
		printf("请输入用户名：");
		scanf("%s", names);
		printf("请输入密码：");
		scanf("%d", &passwords);
		printf("\n");
		if (strcmp(names, name) == 0 && passwords==password)
		{
			break;
		}
		else
		{
			i--;
			printf("输入错误！\n");
			printf("你还有%d次机会\n", i);
			while ((ch = getchar()) != EOF && ch != '\n');
		}
	}
	if (i != 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


//图书销售管理系统
int num1()
{
	int n = 0;
	char ch;
	while (1)
	{
		printf("******************************\n");
		printf("*      图书销售管理系统      *\n");
		printf("*         1.会员管理         *\n");
		printf("*         2.书籍管理         *\n");
		printf("*         3.购物结算         *\n");
		printf("*         4.注销             *\n");
		printf("******************************\n");
		printf("请选择，输入数字（1-4）：");
		scanf("%d", &n);
		if (n >= 1 && n <= 4)
		{
			break;
		}
		else
		{
			printf("\n");
			printf("输入错误，请重新输入\n");
			while ((ch = getchar()) != EOF && ch != '\n');
		}
	}
	printf("\n");
	return n;
}


//图书销售管理系统>会员管理
int num11()
{
	int n = 0;
	char ch;
	while (1)
	{
		printf("图书销售管理系统>会员管理\n");
		printf("**************************\n");
		printf("*  1.显示所有会员        *\n");
		printf("*  2.添加会员信息        *\n");
		printf("*  3.修改会员信息        *\n");
		printf("*  4.返回主菜单          *\n");
		printf("**************************\n");
		printf("请选择，输入数字：");
		scanf("%d", &n);
		if (n >= 1 && n <= 4)
		{
			break;
		}
		else
		{
			printf("\n");
			printf("输入错误，请重新输入\n");
			while ((ch = getchar()) != EOF && ch != '\n');
		}
	}
	printf("\n");
	return n;
}


//图书销售管理系统 > 会员信息管理 > 显示会员信息
int num111()
{
	int i = 0;
	printf("图书销售管理系统 > 会员信息管理 > 显示会员信息\n");
	printf("会员号      姓名     积分\n");
	for (i = 0;i < id2;i++)
	{
		printf("   %-9d%-8s%5d\n", i + 1, id1[i].name, id1[i].money);
	}
	printf("\n");
	printf("\n");
	return 0;
}


//图书销售管理系统 > 会员信息管理 > 新增会员信息
int num112()
{
	printf("图书销售管理系统 > 会员信息管理 > 新增会员信息\n");
	printf("请输入新会员姓名:");
	scanf("%s", id1[id2].name);
	printf("请输入新会员积分:");
	scanf("%d", &id1[id2].money);
	id2 += 1;
	printf("添加成功！\n");
	printf("\n");
	return 0;
}


//图书销售管理系统 > 会员信息管理 >修改会员信息
int num113()
{
	int i = 0;
	printf("图书销售管理系统 > 会员信息管理 >修改会员信息\n");
	printf("请输入要修改的会员号:");
	scanf("%d", &i);
	printf("请输入要修改的会员姓名:");
	scanf("%s", id1[i - 1].name);
	printf("请输入要修改的会员积分:");
	scanf("%d", &id1[i - 1].money);
	printf("修改成功！\n");
	printf("\n");
	return 0;
}


//图书销售管理系统 >书籍管理
int num12()
{
	int n = 0;
	char ch;
	while (1)
	{
		printf("图书销售管理系统 >书籍管理\n");
		printf("****************\n");
		printf("* 1.查看书目   *\n");
		printf("* 2.添加书籍   *\n");
		printf("* 3.删除书籍   *\n");
		printf("* 4.返回主菜单 *\n");
		printf("****************\n");
		printf("请选择，输入数字：");
		scanf("%d", &n);
		if (n >= 1 && n <= 4)
		{
			break;
		}
		else
		{
			printf("\n");
			printf("输入错误，请重新输入\n");
			while ((ch = getchar()) != EOF && ch != '\n');
		}
	}
	printf("\n");
	return n;
}


//图书销售管理系统>书籍管理>书籍列表
int num121()
{
	int i = 0;
	printf("图书销售管理系统>书籍管理>书籍列表\n");
	printf("图书号     图书名                图书价钱\n");
	for (i = 0;i < book2;i++)
	{
		printf("   %-8d%-20s%5d\n", book1[i].s, book1[i].book, book1[i].money);
	}
	printf("\n");
	printf("\n");
	return 0;
}


//图书销售管理系统 >书籍管理>添加书籍
int num122()
{
	printf("图书销售管理系统 >书籍管理>添加书籍\n");
	printf("请输入图书名：");
	scanf("%s", book1[book2].book);
	printf("请输入图书价钱：");
	scanf("%d", &book1[book2].money);
	book1[book2].s= book2 + 1;
	book2 += 1;
	printf("添加成功！\n");
	printf("\n");
	return 0;
}


//图书销售管理系统 >书籍管理>书籍下架
int num123()
{
	int i = 0;
	int j = 0;
	char book[30] = "";
	printf("图书销售管理系统 >书籍管理>书籍下架\n");
	printf("请输入要删除的图书书名：");
	scanf("%s", book);
	for (i = 0; i < book2; i++)
	{
		if (strcmp(book, book1[i].book) == 0)
		{
			j = i + 1;
			break;
		}
	}
	if (i == book2)
	{
		printf("此书不存在！\n");
	}
	else
	{
		printf("找到该图书，位置为：%d\n", book1[i].s);
		for (i = j - 1;i < book2 - 1;i++)
		{
			book1[i] = book1[i + 1];
		}
		book2 -= 1;
		printf("删除成功！\n");
	}
	printf("\n");
	return 0;
}


//图书销售管理系统 >购物结算
int num13()
{
	printf("图书销售管理系统 >购物结算\n");
	num121();
	int z = 0;
	int i = 0;
	int j = 0;
	int m = 0;
	char yn;
	char ch;
	while (1)
	{
		while (1)
		{
			printf("请输入会员号：");
			scanf("%d", &z);
			if (z >= 1 && z <= 4)
			{
				break;
			}
			else
			{
				printf("\n");
				printf("输入错误，请重新输入\n");
				while ((ch = getchar()) != EOF && ch != '\n');
			}
		}
		while (1)
		{
			printf("请输入要购买的书籍编号：");
			scanf("%d", &j);
			for (i = 0;i < book2;i++)
			{
				if (book1[i].s == j)
				{
					j == i;
					break;
				}
			}
			if (i == book2)
			{
				printf("\n");
				printf("此书不存在！请重新输入\n");
				while ((ch = getchar()) != EOF && ch != '\n');
			}
			else
			{
				break;
			}
		}
		printf("请输入您要购买的数量：");
		scanf("%d", &m);
		printf("您购买的图书为%s，数量为%d，总额为%d\n", book1[i].book, m, book1[i].money * m);
		if (id1[z - 1].money >= book1[i].money * m)
		{
			id1[z - 1].money -= book1[i].money * m;
		}
		else
		{
			printf("您的积分不足！\n");
			printf("\n");
			return 0;
		}
		printf("是否继续？（y/n）：");
		getchar();
		scanf("%c", &yn);
		if (yn == 'n')
		{
			break;
		}
	}
	printf("\n");
	return 0;
}