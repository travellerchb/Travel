#include<stdio.h>
int main()
{
	int a, b, c;
	int k = 1, s=0, i = 0, z = 0;
	while (EOF!= scanf_s("%d%d%d", &a, &b, &c))
	{
		s = 0;
		z = 0;
		i++;
		for (k = 1;;k++)
		{
			s = c + 7 * k;
			if (s > 100)
			{
				break;
			}
			if (s % 3 == a && s % 5 == b && s >= 10 )
			{
				printf("Case %d: %d\n", i, s);
				z = 1;
				break;
			}
		}
		if (z == 0)
		{
			printf("Case %d: No answer\n", i);
		}
	}
	return 0;
}