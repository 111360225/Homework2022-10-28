#include <stdio.h>
#include <stdlib.h>

char BIG_to_small(char a);

void main(void)
{
	char Big;
	char small;

	printf("�п�J�j�g�r��:");
	scanf("%c", &Big);
	small = BIG_to_small(Big);
	//small = Big + 32;
	printf("�p�g�r����%c\n", small);
	system("pause");
	return 0;
}

char BIG_to_small(char a)
{
	char b;
	b = a + 32;
	return b;
}
