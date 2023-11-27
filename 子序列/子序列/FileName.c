#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000000] = "";
	char b[1000000] = "";
	int i = 0, j = 0;
	int s = 0;
	int z = 1;
	int sz1 = 0, sz2 = 0;
	while (scanf_s("%s", a, 100000) != EOF && scanf_s("%s", b, 100000) != EOF)
	{
		sz1 = strlen(a);
		sz2 = strlen(b);
		i = 0, j = 0;
		s = 0;
		z = 1;
		for (i = 0;i < sz1;i++)
		{
			j = s;
			if (i < sz1 && j >= sz2)
			{
				z = 0;
			}
			for (;j < sz2;j++)
			{
				if (a[i] == b[j])
				{
					s = j + 1;
					break;
				}
				else if (a[i] != b[j] && j == sz2 - 1)
				{
					z = 0;
					break;
				}
			}
			if (z == 0)
			{
				break;
			}
		}
		if (z == 1)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
	return 0;
}