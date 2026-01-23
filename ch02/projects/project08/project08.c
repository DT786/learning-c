// This program calculates the remaining balance on a loan after the first, second, and third monthly payments.

#include <stdio.h>

int main(void)
{
	float loan_amount, yearly_interest_rate, monthly_payment, balance_after_first_month, balance_after_second_month, balance_after_third_month, monthly_interest_rate;

	printf("Enter amount of loan: ");
	scanf("%f", &loan_amount);
	printf("Enter interest rate: ");
	scanf("%f", &yearly_interest_rate);
	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);
	
	monthly_interest_rate = yearly_interest_rate /  100 / 12;
	balance_after_first_month = loan_amount - monthly_payment + loan_amount * monthly_interest_rate;
	balance_after_second_month = balance_after_first_month - monthly_payment + balance_after_first_month * monthly_interest_rate;
	balance_after_third_month = balance_after_second_month - monthly_payment + balance_after_second_month * monthly_interest_rate;
	
	printf("\nBalance remaining after first payment: $%.2f\n", balance_after_first_month);
	printf("Balance remaining after second payment: $%.2f\n", balance_after_second_month);
	printf("Balance remaining after third payment: $%.2f\n", balance_after_third_month);

	return 0;
}
