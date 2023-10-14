#include<stdio.h>
int main()
{
	int n = 0;
	int a = 0;
	int s = 0;
	int i = 0;
	int b = 0;
	scanf_s("%d%d", &n, &a);
	s += a;
	b = a;
	for (i = 1;i < n;i++)
	{
		a = 10 * a + b;
		s += a;
	}
	printf("%d", s);
	return 0;
}