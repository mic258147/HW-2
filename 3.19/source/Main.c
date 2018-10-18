#include <stdlib.h>
#include <stdio.h>

int main()
{
	int day;
	float loan = 0, rate = 0, interest = 0;
	while (loan != -1)
	{
		printf("Enter loan principal (-1 to end): ");
		scanf_s("%f", &loan);
		if (loan == -1)
		{
			system("pause");
			return 0;
		}
		printf("Enter interest rate: ");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in days: ");
		scanf_s("%d", &day);
		interest = loan * rate*day / 365;
		printf("The interest charge is $%.2f\n\n", interest);
	}
}