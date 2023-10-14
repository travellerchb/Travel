#include<stdio.h>
int main()
{
	double a=-10, b=10, c=(a+b)/2,f1,f2,f3;
	do{
		f1 = 2 * a * a * a - 4 * a * a + 3 * a - 6;
		f2 = 2 * b * b * b - 4 * b * b + 3 * b - 6;
		f3 = 2 * c * c * c - 4 * c * c + 3 * c - 6;
		if (f3 > 0)
		{
			b = c;
			c = (a + b) / 2;
		}
		else if (f3 < 0)
		{
			a = c;
			c = (a + b) / 2;
		}
		else
			printf("%f", c);
	} while(f3!=0);
	return 0;
}