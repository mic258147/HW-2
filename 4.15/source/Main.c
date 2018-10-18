#include <stdlib.h>
#include <stdio.h>

int main()
{
	float money;
	int times;
	printf("Enter investment of money: ");
	scanf_s("%f",&money);
	printf("Enter time: ");
	scanf_s("%d", &times);
	for (int i = 0; i < times; i++)
	{
		money = money * (1.1 + 0.005*i);
	}
	printf("Compound interest: %.2f\n", money);
	system("pause");
	return 0;
}