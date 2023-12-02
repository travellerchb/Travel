#include<stdio.h>
#include<math.h>
int main()
{
	int m = 0, n = 0, r = 0;
	scanf_s("%d%d%d", &n, &m, &r);
	char t[1000] = "";
	int i = 0, j = 0;
	int i1[1000000] = { 0 }, j1[1000000] = {0};
	int i2 = 0, j2 = 0;
	int s = 0;
	for (i = 0;i < n;i++)
	{
		scanf_s("%s", t, 1000);
		for (j = 0;j < m;j++)
		{
			if (t[j] == 'X')
			{
				i1[s] = i;
				j1[s] = j;
				s++;
			}
			if (t[j] == 'O')
			{
				i2 = i;
				j2 = j;
			}
		}
	}
	int u = 0, num = 0;
	double s1 = 0, s2 = 0, s3 = 0;
	for (u = 0;u <= s;u++)
	{
		s1 = abs(i1[u] - i2);
		s2 = abs(j1[u] - j2);
		s3 = sqrt(s1 * s1 + s2 * s2);
		if (s3 <= r)
		{
			num++;
		}
	}
	printf("%d", num);
	return 0;
}