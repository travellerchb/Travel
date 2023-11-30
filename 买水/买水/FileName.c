#include<stdio.h>
long long sz(long long n);
int main()
{
	long long n = 0, k = 0, z = 0;
	int t = 0;
	scanf_s("%d", &t);
	int i = 0, s = 0, x = 0;
	while (i < t)
	{
		x = 0, z = 0;
		i++;
		scanf_s("%lld%lld", &n, &k);
		x = sz(n);
		while (x > k)
		{
			if (n % 2 != 0)
			{
				n++;
				z++;
			}
			else
			{
				n += 2;
				z += 2;
			}
			x = sz(n);
		}
		printf("%lld\n", z);
	}
	return 0;
}

long long sz(long long n)
{
	long long x = 0;
	while (n != 1)
	{
		x += n % 2;
		n = n / 2;
	}
	x += 1;
	return x;
}