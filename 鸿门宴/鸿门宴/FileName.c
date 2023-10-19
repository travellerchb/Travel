#include<stdio.h>
int main()
{
	int n = 0, i = 0, m = 0, sum = 0;
	scanf_s("%d", &n);
	int a = 0;
	for (i = 0;i < n;i++)
	{
		scanf_s("%d", &a);
		if (a > (i + 1))
		{
			m = a - (i + 1);
			sum += m;
		}

	}
	if (sum % 2 == 0)
		printf("baicha");
	else
		printf("guodong");
	return 0;
}