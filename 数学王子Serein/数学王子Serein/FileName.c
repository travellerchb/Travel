#include<stdio.h>
int main()
{
	long long s = 0;
	long long n = 0;
	long long m = 0;
	long long i = 0;
	long long a = 0;
	long long b = 0;
	long long c = 0;
	scanf_s("%lld%lld", &s,&n);
	if (s % n != 0)
		printf("-1");
	else
	{
		long long d = s / n;
		m = s / n + (n - 1);
		i = s / n - (n + 1);
		if(i>0 && i%2==0)
		    printf("%lld", m);
		else
			printf("-1");
	}
	
	return 0;
}