#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20] = { 0 };
	char str2[20] = { 0 };
	int i = 0;
	int j = 0;
	scanf_s("%s", str1,20);
	int sz = strlen(str1);
	for (;i < sz; i++)
		if (str1[i] % 2 != 0)
		{
			str2[j] = str1[i];
			j++;
		}
	printf("%s", str2,20);
	return 0;
}