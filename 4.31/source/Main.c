#include <stdlib.h>
#include <stdio.h>

int main()
{
	int i, j;
	for (i = 0; i < 9; i++)
	{
		if (i < 5)
		{
			for (j = 4; j > i; j--)
				printf(" ");
			for (j = 0; j < i * 2 + 1; j++)
				printf("*");
		}
		if (i >= 5)
		{
			for (j = 0; j < i - 4; j++)
				printf(" ");
			for (j = 18; j > i * 2 + 1; j--)
				printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}