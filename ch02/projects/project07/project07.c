// This program asks the user to enter a U.S. dollat amount, and then shows how to pay that amout using the smallest number of $20, $10, $5, and $1 bills.

#include <stdio.h>

int main(void)
{
	int dollars, _20bills, _10bills, _5bills, _1bills;

	printf("Enter a dollar amount: ");	
	scanf("%d", &dollars);

	_20bills = dollars / 20;
	dollars = dollars - _20bills * 20;
	_10bills = dollars / 10;
	dollars = dollars - _10bills * 10;
	_5bills = dollars / 5;
	dollars = dollars - _5bills * 5;
	_1bills = dollars;
	
	printf("$20 bills: %d\n", _20bills);
	printf("$10 bills: %d\n", _10bills);
	printf(" $5 bills: %d\n", _5bills);
	printf(" $1 bills: %d\n", _1bills);

	return 0;
}

