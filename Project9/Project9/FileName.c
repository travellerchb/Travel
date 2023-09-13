#include<stdio.h>
#include<math.h>
int main()
{
	int i = 100;
	int j = 2;
	int count = 0;
	for (i = 101; i <= 200; i+=2)
	{
		for (j = 2; j < sqrt(i); j++)
			if (i % j == 0)
				break;
		if (j>sqrt(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n素数个数为%d\n", count);
	return 0;
}