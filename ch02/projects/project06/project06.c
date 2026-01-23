// This program asks the user to enter a value for x, evaluates a certain polynomial at that value of x using Horner's rule, and then displays the value of the polynomial.

#include <stdio.h>

int main(void)
{
	int x;

	printf("Enter a value: ");
	scanf("%d", &x);

	int polynomial = (((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);

	printf("Value of polynomial: %d\n", polynomial);

	return 0;
}
