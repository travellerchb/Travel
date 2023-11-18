#include<stdio.h>
void str(char a[], char b[],int* m);
int main()
{
	char a[20] = "";
	char b[20] = "";
	int count = 0;
	int* m = &count;
	gets(a);
	gets(b);
	str(a, b, m);
	printf("%d" ,* m);
}

void str(char a[], char b[],int* m)
{
	int i = 0;
	for (i = 0;a[i] != '\0' || b[i] != '\0';i++)
	{
		if (a[i] == b[i])
		{
			;
		}
		else if (a[i] < b[i])
		{
			(*m) = a[i] - b[i];
		}
		else if (a[i] > b[i])
		{
			(*m) = a[i] - b[i];
		}
	}
}