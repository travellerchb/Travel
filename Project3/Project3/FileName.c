#include<stdio.h>
int main()
{
	int arr[] = { 0,2,6,8,9,10,14,16 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int left = 0;
	int right = sz - 1;
	scanf_s("%d", &i);
	while (left<=right)
	{
		int mid = (right + left) / 2;
		if (arr[mid] < i)
			left = mid + 1;
		else if (arr[mid] > i)
			right = mid - 1;
		else
		{
			printf("找到了，下标是%d", mid);
			break;
		}
	}
    if (left > right)
	{
		printf("无此数");

	}
	return 0;
}