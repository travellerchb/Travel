#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = { "123456" };
	char arr2[20] = { 0 };
	int i = 0;
	for (i == 0; i < 3; i++)
	{
		printf("ÇëÊäÈëÃÜÂë£º");
		scanf_s("%s", arr2, 20);
		if (strcmp(arr1, arr2) == 0)
		{
			printf("ÃÜÂëÕýÈ·");
			break;
		}
		else
		{
			printf("ÃÜÂë´íÎó£¡£¡£¡");
		}
	}
	return 0;
}