#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	int	num1;
	int num2;
	int numn;
	num1 = 0;
	num2 = 1;
	numn = 0;

	printf("�п�J���:");
	scanf("%d", &n);

	printf("�}�C��:");

	for (int i = 1; i <= n; ++i) {
		if (i == 1) {
			printf("%d ", num1);
			continue;
		}
		if (i == 2) {
			printf("%d ", num2);
			continue;
		}
		numn = num1 + num2;
		num1 = num2;
		num1 = numn;

		printf("%d ", numn);
	}

	printf("\n�̤j�Ʀr��:%d", numn);
	return 0;
}