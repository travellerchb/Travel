#include<stdio.h>

int sushu(int x)
{
	int i = 0;
	int j = 1;
	for (i = 2;i < x;i++)
	{
		if (x % i == 0)
		{
			j = 0;
			break;
		}
	}

	return j;
}
int main()
{
	int sushu(int);
	int a = 0;
	int b = 0;
	scanf_s("%d", &a);
	for (b = 2;b <= a;b++)
	{
		if (a % b == 0)
		{
			if (sushu(b) == 1)
				printf("%d ", b);
		}
	}
	return 0;
}