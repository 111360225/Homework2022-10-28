#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(void)
{
	int base;
	int exp;
	int ans;
	printf("�п�J���ƻP����:");
	scanf("%d %d", &base, &exp);
	ans =  pow(base, exp);
	printf("���׬�:%d\n", ans);
	system("pause");
	return 0;
}