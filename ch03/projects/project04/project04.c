#include <stdio.h>

int main(void)
{	
	int first_number, second_number, third_number;

	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d)%d-%d", &first_number, &second_number, &third_number);
	
	printf("You entered %d.%d.%d\n", first_number, second_number, third_number);

	return 0;
}

