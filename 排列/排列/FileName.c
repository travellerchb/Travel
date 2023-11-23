#include<stdio.h>
void sz(int n, int* p1, int* p2);
int main()
{
	int a = 123;
	int b, c;
	int l = 0, t = 0;
	int* p1 = &l;
	int* p2 = &t;
	for (a = 123;a <= 329;a++)
	{
		t = 1;
		l = 0;
		b = a * 2;
		c = a * 3;
		if (c <= 987)
		{
			sz(a, p1, p2);
			sz(b, p1, p2);
			sz(c, p1, p2);
			if (*p1 == 45 && *p2==362880)
			{
				printf("%d %d %d\n", a, b, c);
			}
		}
	}
	return 0;
}

void sz(int n,int* p1,int* p2)
{
	int i, j, k;
	i = n / 100;
	j = n / 10 % 10;
	k = n % 10;
	*p1 += i + j + k;
	*p2 *= i * j * k;
}