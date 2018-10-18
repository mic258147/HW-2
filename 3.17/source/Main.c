#include <stdlib.h>
#include <stdio.h>

int main()
{
	int accnum = 0;
	float begin=0, charges=0, credits=0, limit=0;
	
	while (accnum != -1)
	{
		printf("Enter account number (-1 to end): ");
		scanf_s("%d", &accnum);
		if (accnum == -1)
		{
			system("pause");
			return 0;
		}
		printf("Enter beginning balance: ");
		scanf_s("%f", &begin);
		printf("Enter total charges: ");
		scanf_s("%f", &charges);
		printf("Enter total credits: ");
		scanf_s("%f", &credits);
		printf("Enter credit limit: ");
		scanf_s("%f", &limit);
		begin = begin + charges - credits;
		if (limit < begin)
			printf("Account:      %d\nCredit limit: %.2f\nBalance:      %.2f\nCredit Limit Exceeded.", accnum, limit, begin);
		printf("\n");
	}
}