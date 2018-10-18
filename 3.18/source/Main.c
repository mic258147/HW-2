#include <stdlib.h>
#include <stdio.h>

int main()
{
	float sales=0, total=0;
	while (sales != -1)
	{
		printf("Enter sales in dollars (-1 to end): ");
		scanf_s("%f", &sales);
		if (sales == -1)
		{
			system("pause");
			return 0;
		}
		total = 200 + 0.09*sales;
		printf("Salary is: $%.2f\n\n", total);
	}
}