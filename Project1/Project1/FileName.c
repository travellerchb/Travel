//
#include<stdio.h>

//
//
int main()
{
	int a = 1;
	int n = 1;
	for (a = 1; ; a++)
		n = a * n;
	printf("%d", n);
	return 0;
}