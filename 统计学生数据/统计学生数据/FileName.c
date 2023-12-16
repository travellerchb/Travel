#include<stdio.h>
typedef struct student
{
	int id;
	char name[10];
	double s[3];
	double sum;
}stu;

int input(stu[], int);
void average(stu[], int, int);

int main()
{
	stu a[10];
	int n = 10, j=3;
	int k=input(a, n);
	average(a, n, j);
	printf("%d %s %.2lf %.2lf %.2lf %.2lf", a[k].id, a[k].name, a[k].s[0], a[k].s[1], a[k].s[2], a[k].sum);
	return 0;
}

int input(stu a[], int n)
{
	double sum = 0;
	int k = 0;
	int i = 0;
	for (i = 0;i < n;i++)
	{
		scanf_s("%d", &a[i].id);
		scanf_s("%s", a[i].name,10);
		scanf_s("%lf%lf%lf", &a[i].s[0], &a[i].s[1], &a[i].s[2]);
		a[i].sum = a[i].s[0] + a[i].s[1] + a[i].s[2];
		if (a[i].sum > sum)
		{
			sum = a[i].sum;
			k = i;
		}
	}
	return k;
}

void average(stu a[], int n, int j)
{
	double sum[3] = {0,0,0};
	int i = 0, t = 0;
	for (t=0;t<j;t++)
	{
		for (i = 0; i < n;i++)
		{
			sum[t] += a[i].s[t];
		}
	}
	printf("%.2lf %.2lf %.2lf\n", sum[0] / n, sum[1] / n, sum[2] / n);
}