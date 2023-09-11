#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	char arr1[] = { "hello world!!!" };
	char arr2[] = { "##############" };
	int left = 0;
	int sz = strlen(arr1);
	int right = sz - 1;
	printf("%s", arr2);
	while (left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s", arr2);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}
	printf("%s", arr2);
	return 0;
}