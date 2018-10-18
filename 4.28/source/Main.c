#include <stdlib.h>
#include <stdio.h>

int main()
{
	int type, hours,item ;
	float total,wage;
	printf("Enter type: ");
	scanf_s("%d",&type);
	if (type == 1)
	{
		printf("Enter fixed weekly salary: ");
		scanf_s("%f", &total);
		printf("Total wage = %.2f\n", total);
	}
	else if (type == 2)
	{
		printf("Enter hourly wage: ");
		scanf_s("%f", &wage);
		printf("Enter work time: ");
		scanf_s("%d", &hours);
		if (hours > 40)
			total = 40 * wage + (hours - 40)*wage*1.5;
		else
			total = hours * wage;
		printf("Total wage = %.2f\n", total);
	}
	else if (type == 3)
	{
		printf("Enter gross weekly sales: ");
		scanf_s("%f", &wage);
		total = 250 + 0.057*wage;
		printf("Total wage = %.2f\n", total);
	}
	else if (type == 4)
	{
		printf("Enter money of item: ");
		scanf_s("%f", &wage);
		printf("Enter produce item: ");
		scanf_s("%d", &item);
		total = item * wage;
		printf("Total wage = %.2f\n", total);
	}
	else
		printf("error type!\n");
	system("pause");
	return 0;
}