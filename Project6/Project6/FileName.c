#include<stdio.h>
int main()
{
	int a=0;
	int b=0;
	int c=0;
	scanf_s("%d%d%d", &a, &b, &c);
		if (a < b)
		{
			int i = a;
			a = b;
			b = i;
		}
		if (a < c)
		{
			int k = a;
			a = c;
			c = k;
		}
		if (b < c)
		{
			int l = b;
			b = c;
			c = l;
		}
	printf("%d%d%d", a, b, c);

	return 0;
}