#include<stdio.h>
#include<math.h>
int main()
{
	float x = 0, eps = 0, sum = 0, i = 0, k = -1, l = 2;
	float a = 1, b = 2;
	float j = a / b;
	scanf_s("%f%f", &x,&eps);
	sum += x;
	i = x;
	j = k * j;
	i = j * (l - 1) / (l + 2) * pow(x, (l + 1));
	sum += i;
	while(fabs(i) >= eps)
	{
		i = k * i * (l - 1) / (l + 2) * pow(x, (l + 1));
		sum += i;
		l += 2;
	}
	printf("%f", sum);

	return 0;
}