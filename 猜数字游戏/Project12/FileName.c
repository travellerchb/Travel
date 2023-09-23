#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("******************************\n");
	printf("**** 1 .play     0 .exit *****\n");
	printf("******************************\n");
	printf("请输入:>");
}
void game()
{
	int i = 0;
	int ret = 0;
	ret = rand()%100+1;
    while (1)
	{
		printf("请猜一个数字:>");
		scanf_s("%d", &i);
		if (i > ret)
			printf("太大了\n");
		else if (i < ret)
			printf("太小了\n");
		else
		{
			printf("恭喜你，答对了！！！\n");
			break;
		}
	}

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	return 0;
}