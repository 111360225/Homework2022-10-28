#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(void)
{
	int base;
	int exp;
	int ans;
	printf("請輸入底數與指數:");
	scanf("%d %d", &base, &exp);
	ans =  pow(base, exp);
	printf("答案為:%d\n", ans);
	system("pause");
	return 0;
}