// This program computes the volume of a sphere, and lets the user enter the radius.

#include <stdio.h>
#define PI 3.14

int main(void)
{
	int radius;

	printf("Enter radius: ");
	scanf("%d", &radius);

	float volume = 4.0f/3.0f * PI * radius * radius * radius;

	printf("Volume: %f\n", volume);

	return 0;
}
