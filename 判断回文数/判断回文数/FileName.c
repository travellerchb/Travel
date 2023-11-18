#include<stdio.h>
int str1(char a[],int sz);
int main()
{
	char a[100] = "";
	gets(a);
	int sz = strlen(a);
	int s=str1(a,sz);
	if (s == 1)
	{
		printf("YES");
	}
	else if (s == 0)
	{
		printf("NO");
	}
	return 0;
}

int str1(char a[],int sz)
{
	char b[100] = "";
	int i = 0;
	int j = 0;
	for (i = sz-1;i >= 0;i--)
	{
		b[j] = a[i];
		if (b[j] != a[j])
		{
			return 0;
		}
		j++;
	}
	return 1;
}