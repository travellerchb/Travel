#include<stdio.h>
int main()
{
	int a, b, c;
	int n = 0;
	int i = 0;
	int t = 0;
	int j = 0;
	int s = 0;
	while (scanf_s("%d%d%d", &a, &b, &c))
	{
		s = 0;
		j = 0;
		i++;
		if (a == 0 && b == 0 && c == 0)
		{
			break;
		}
		printf("Case %d: %d.", i, a / b);
		n = a % b;
		t = n * 10 / b;
		for (j = 0;j < c;j++)
		{
			s = t;
			/*if (j+1 == c)
			{
				n = n * 10 % b;
				t = n * 10 / b;
				if (t < 5)
				{
					printf("%d\n",s);
					break;
				}
				else if (t >= 5)
				{
					printf("%d\n", s + 1);
					break;
				}
			}*/
			printf("%d", s);
			n = n * 10 % b;
			t = n * 10 / b;
			if (j + 1 == c)
			{
				printf("\n");
			}
		}
	}
	return 0;
}