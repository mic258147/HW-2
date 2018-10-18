#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a, i, j;
	for (i = 1; i < 500; i++)
	{
		for (j = 1; j < 500; j++)
		{
			for (a = 1; a < 501; a++)
			{
				if ((i < j) && (i*i + j * j == a * a))
					printf("%-3d,%-3d,%-3d\n", i, j, a);
			}
		}
	}
	system("pause");
	return 0;
}