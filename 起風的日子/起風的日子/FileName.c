#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000] = "";
	long long t = 0, i = 0;
	scanf_s("%lld", &t);
	int n = 0, j = 0;
	int num = 0;
	while (i < t)
	{
		num = 0;
		i++;
		scanf_s("%s", s, 1000);
		n = strlen(s);
		for (j = 0;j < n;)
		{
			if (s[j] == 'k')
			{
				if (s[j + 1] != 'a')
				{
					j += 2;
				}
				else if (s[j + 1] == 'a')
				{
					if (s[j - 1] != 'k' && s[j + 2] == 'z' && s[j + 3] == 'e')
					{
						j += 4;
						num++;
					}
					else if (s[j - 1] != 'k' && s[j + 2] == '-' && s[j + 3] == 'z' && s[j + 4] == 'e')
					{
						j += 5;
						num++;
					}
					else
					{
						j+=2;
					}
				}
			}
			else
			{
				j++;
			}
			if (j >= n)
			{
				break;
			}
		}
		printf("%d\n", num);
	}
	return 0;
}