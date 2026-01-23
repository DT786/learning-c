// This program computes the volume of a sphere with a radius of 10 metres.

#include <stdio.h>
#define PI 3.14

int main(void)
{
	int radius = 10;
	float volume = 4.0f/3.0f * PI * radius * radius * radius;
	
	printf("Volume: %f\n", volume);

	return 0;
}
