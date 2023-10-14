#include<stdio.h>
int main()
{
	int year = 0;
	int month = 0;
	int day = 0;
	int num = 0;
	int n = 0;
	scanf_s("%d%d%d", &year,&month,&day);
	num = 30 * (month-1);
	if (year % 400 == 0 || year % 4 == 0, year % 100 != 0)
	{
		if (month > 2)
			num = num + 1;
	}
	if (month > 2)
	{
		num = num - 2;
	}
	if (month > 8)
	{
		month = month - 7;
		if (month == 1)
			n = n + 0;
		if (month != 1 && (month - 1) % 2 == 0)
		{
			n = (month - 1) / 2 + n;
		}
		if (month != 1 && (month - 1) % 2 != 0)
			n = (month - 1) / 2 + (month - 1) % 2 + n;
		n=4+n;
	}
	else
	{
		if (month == 1)
			n = n + 0;
		if (month != 1 && (month - 1) % 2 == 0)
		{
			n = (month - 1) / 2 + n;
		}
		if (month != 1 && (month - 1) % 2 != 0)
			n = (month - 1) / 2 + (month - 1) % 2 + n;
	}
	num = num + n+ day;
	printf("%d", num);
	return 0;
}