#include<stdio.h>
int main()
{
	int z[200] = { 0 };
	int a, b, c;
	int i = 0;
	int k = 0;
	int s[200];
	char d;
	while (1)
	{
		if ((d = getchar()) != EOF)
		{
			a = d - 48;
		}
		else
		{
			break;
		}
		d = getchar();
		if ((d = getchar()) != EOF)
		{
			b = d - 48;
		}
		else
		{
			break;
		}
		d = getchar();
		if ((d = getchar()) != EOF)
		{
			c = d - 48;
		}
		else
		{
			break;
		}
		d = getchar();
		i++;
		for (k = 1;;k++)
		{
			s[i] = c + 7 * k;
			if (s[i] % 3 == a && s[i] % 5 == b && s[i] <= 100 && s[i] >= 10)
			{
				z[i] = 1;
				break;
			}
			if (s[i] > 100)
			{
				break;
			}
		}

	}
	int j = 0;
	for (j = 1;j <= i;j++)
	{
		if (z[j] == 1)
		{
			printf("Case %d: %d\n", j, s[j]);
		}
		else
		{
			printf("Case %d: No answer\n", j);
		}
	}

	return 0;
}