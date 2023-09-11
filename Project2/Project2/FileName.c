#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0;i < sz;i++)
		if (k == arr[i])
		{
			break;
		}
	printf("ÏÂ±êÊÇ%d", i);
	return 0;
}

