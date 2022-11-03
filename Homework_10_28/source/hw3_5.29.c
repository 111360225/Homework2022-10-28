#include<stdio.h>
#include<stdlib.h>

	int num1;
	int num2;
	int num3;
	int num4;
	int i;
	int j;
void main(void)
{
	printf("叫块ㄢ计―程そ计:");
	scanf("%d%d", &num1, &num2);
	for (i = 1; i < 10000; i++)
	{
		num3 = num1 * i;
		for (j = 1; j < 10000; j++)
		{
			num4 = num2 * j;
			if (num3 == num4)
			{
				printf("程そ计%d\n", num3);
				system("pause");
				return;
			}	
		}
		num4 = num2;
	}
}
