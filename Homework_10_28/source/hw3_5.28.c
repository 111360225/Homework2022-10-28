#include <stdio.h>
#include <stdlib.h>

char BIG_to_small(char a);

void main(void)
{
	char Big;
	char small;

	printf("請輸入大寫字母:");
	scanf("%c", &Big);
	small = BIG_to_small(Big);
	//small = Big + 32;
	printf("小寫字母為%c\n", small);
	system("pause");
	return 0;
}

char BIG_to_small(char a)
{
	char b;
	b = a + 32;
	return b;
}
