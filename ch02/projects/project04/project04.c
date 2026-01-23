// This program asks the user to enter a dollars-and-cents amount, the displays the amout with 5% tax added.

#include <stdio.h>

int main(void)
{
	float dollars;

	printf("Enter an amount: ");
	scanf("%f", &dollars);
	
	float dollars_with_tax = dollars * 1.05f;

	printf("With tax added: $%.2f\n", dollars_with_tax);

	return 0;
}

