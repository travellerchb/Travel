#include<stdio.h>
int main()
{
	int i = 0, j = 0, k = 0;
	scanf_s("%d%d%d", &i, &j, &k);
	int* m = &i;
	int* n = &j;
	int* l = &k;
	int t = 0;
	if (*n > *l)
	{
		t = *n;
		*n = *l;
		*l = t;
	}
	if (*m > *n)
	{
		t = *m;
		*m = *n;
		*n = t;
	}
	printf("%d %d %d", *m, *n, *l);
	return 0;
}