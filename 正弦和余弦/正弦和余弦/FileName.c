#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c;
	scanf_s("%lf", &a);
	a = a *3.1415926535/ 180.0;
	b = sin(a);
	c = cos(a);
	printf("%.6lf\n%.6lf", b, c);
	return 0;
}