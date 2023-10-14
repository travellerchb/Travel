#include<stdio.h>
#include<string.h>
int main()
{
	char arr[30] = { 0 };
	int i = 0;
	scanf_s("%s", arr,30);
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0;i <= sz;i++)
		if (arr[i] >= 91 && arr[i] <= 122)
			arr[i] = arr[i] - 32;
	printf("%s", arr,30);
	return 0;
}