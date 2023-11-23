#include<stdio.h>
#include<string.h>
int main()
{
	char a[100] = "";
	int n = 0;
	int j = 0;
	scanf_s("%d", &n);
	while (n)
	{
		scanf_s("%s", a, 100);
		int sz = strlen(a);
		int i = 0;
		int num = 0;
		for (i = 0;i < sz;i++)
		{
			if (a[i] == 'O')
			{
				num += 1;
				j = i;
				while (a[j - 1] == 'O' && j - 1 >= 0)
				{
					j--;
					num += 1;
				}
			}
		}
		printf("%d\n", num);
		n--;
	}
	return 0;
}