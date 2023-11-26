#include<stdio.h>
#include<string.h>
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int i = 0;
	int j = 0;
	while (i < n)
	{
		int c = 0;
		i++;
		char a[100] = "";
		char b[100] = "";
		scanf_s("%s", a, 100);
		int sz = strlen(a);
		for (j = 0;j < sz;j++)
		{
			if (a[j] == '\0')
			{
				break;
			}
			else if (a[j] != b[0])
			{
				b[j] = a[j];
			}
			else if (a[j] == b[0])
			{
				int z = 1;
				int l = 0;
				int s = strlen(b);
				c = s - 1;
				int m = 0;
				for (m = 0;m < sz;)
				{
					z = 1;
					s = strlen(b);
					for (l = 0;l < s;l++)
					{
						if (a[m + l] != b[l])
						{
							z = 0;
							c = c + 1;
							int h = 0;
							for (h = 0;h <= c;h++)
							{
								b[h] = a[h];
							}
							m = 0;
							break;
						}
					}
					if (z == 1)
					{
						m = m + s;
					}
				}
				if (z = 1)
				{
					break;
				}
			}
		}
		printf("%d\n", strlen(b));
		printf("\n");
	}
	return 0;
}