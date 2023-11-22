#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	double s = 95 * n;
	if (s >= 300)
	{
		s = s * 0.85;
	}
	printf("%.2lf", s);
	return 0;
}