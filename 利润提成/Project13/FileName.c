#include<stdio.h>
int main()
{
	float profit = 0;
	float num = 0;
	scanf_s("%f", &profit);
		if (profit <= 10)
			num = profit * 0.1;
		else if (profit > 10 && profit <= 20)
			num = 10 * 0.1 + (profit - 10) * 0.075;
		else if (profit > 20 && profit <= 40)
			num = 10 * 0.1 + 10 * 0.075 +(profit - 20) * 0.05;
		else if (profit > 40 && profit <= 60)
			num = 10 * 0.1 + 10 * 0.075 + 20 * 0.05+(profit - 40) * 0.03;
		else if (profit > 60 && profit <= 100)
			num = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03+(profit - 60) * 0.015;
		else
			num = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + 40 * 0.015 + (profit - 100) * 0.01;
	printf("%.2f", num);
	return 0;
}