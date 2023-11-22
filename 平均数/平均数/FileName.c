#include<stdio.h>
int main()
{
	double a, b, c, d;
	scanf_s("%lf%lf%lf", &a, &b, &c);
	d = (a + b + c) / 3;
	printf("%.3lf", d);
	return 0;
}