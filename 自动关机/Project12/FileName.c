#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("你的电脑将在一分钟内关机\n输入取消可停止执行:>");
	scanf_s("%s", input,20);
	if(strcmp(input, "取消") == 0)
		system("shutdown -a");
	else
		goto again;
	return 0;
}