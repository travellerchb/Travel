#include<stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int i = 0;
	scanf_s("%d%d", &m, &n);
	while (m % n != 0)
	{
		i = m % n;
		m = n;
		n = i;
		m % n;
		if (m % n == 0)
			break;
	}
	printf("最大公约数是%d", n);

	return 0;
}