#include<stdio.h>
int main()
{
	int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
	scanf_s("%d%d", &x1, &y1);
	scanf_s("%d%d", &x2, &y2);
	int n = 0, m = 0;
	n = x2 - x1;
	m = y2 - y1;
	int t = 0, i = 0, v = 0;
	char s = 0;
	scanf_s("%d", &t);
	while (i < t)
	{
		if (n == 0 && m == 0)
		{
			break;
		}
		v++;
		i++;
		getchar();
		scanf_s("%c", &s);
		if (n < 0)
		{
			if (s == 'S')
			{
				n++;
			}
		}
		else if (n > 0)
		{
			if (s == 'N')
			{
				n--;
			}
		}
		if (m < 0)
		{
			if (s == 'E')
			{
				m++;
			}
		}
		else if (m > 0)
		{
			if (s == 'W')
			{
				m--;
			}
		}
	}
	if (n == 0 && m == 0)
	{
		printf("%d", v);
	}
	else
	{
		printf("Single dog!");
	}
	return 0;
}