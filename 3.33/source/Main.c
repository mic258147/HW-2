#include <stdlib.h>
#include <stdio.h>

int main()
{
	int length, breadth, i, j;
	printf("Enter length of rectangle: ");
	scanf_s("%d", &length);
	printf("Enter breadth of rectangle: ");
	scanf_s("%d", &breadth);
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < breadth; j++)
		{
			if ((i == 0) || (i == length-1) || (j == 0) || (j == breadth-1))
				printf("+");
			else
				printf(" ");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}