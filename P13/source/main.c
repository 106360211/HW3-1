#include <stdio.h>
#include <stdlib.h>

double pow(double, int);
void main()
{
	int k;
	double ans;
	printf("�p��3.5��k����?\n�п�Jk=");
	scanf("%d", &k);
	ans = pow(3.5, k);
	printf("3.5��%d����=%f\n", k, ans);
	system("pause");
}

double pow(double X, int n)
{
	int i;
	double powXn = 1;
	for (i = 1; i <= n; i++)
		powXn *= X;
	return powXn;
}