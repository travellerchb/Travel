#include<stdio.h>
void st(char a[],int* m);
int main()
{
	int count = 0;
	int* m = &count;
	char a[20] = "";
	int i = 0;
	gets(a);
	st(a,m);
	return 0;
}

void st(char a[],int* m)
{
	int i = 0;
	for (i = 0;;i++)
	{
		if (a[i] == '\0')
		{
			break;
		}
		(*m)++;
	}
	printf("%d", *m);
}