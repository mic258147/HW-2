#include <stdlib.h>
#include <stdio.h>

int main()
{
	int i, j, k;
	printf("(A)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = -1; j < i; j++)
			printf("*");
		printf("\n");
	}
	printf("(B)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 10; j > i; j--)
			printf("*");
		printf("\n");
	}
	printf("(C)\n");
	for (i = 0; i < 10; i++)
	{
		for (k = 0; k < i; k++)
			printf(" ");
		for (j = 10; j > i; j--)
			printf("*");
		printf("\n");
	}
	printf("(D)\n");
	for (i = 0; i < 10; i++)
	{
		for (k = 9; k > i; k--)
			printf(" ");
		for (j = -1; j < i; j++)
			printf("*");
		printf("\n");
	}
	system("pause");
	return 0;
}