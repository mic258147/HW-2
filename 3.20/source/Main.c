#include <stdlib.h>
#include <stdio.h>

int main()
{
	int hours=0;
	float rate, total;
	while (hours != -1)
	{
		printf("Enter # of hours worked (-1 to end): ");
		scanf_s("%d", &hours);
		if (hours == -1)
		{
			system("pause");
			return 0;
		}
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf_s("%f", &rate);
		if (hours > 40)
			total = 40 * rate + (hours - 40)*rate*1.5;
		else
			total = hours * rate;
		printf("Salary is $%.2f\n\n", total);
	}
}