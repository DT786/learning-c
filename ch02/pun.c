/* Name: pun.c
 * Purpose: Prints a bad pun.
 * Author: K. N. King
 */

#include <stdio.h>

int main(void) // Beginning of main program
{
 int height = 8, length = 12;
 int width, volume;
 float profit, loss;

 width = 10;
 volume = height * length * width;
 profit = 2150.48f;
 
 printf("Height: %d\n", height);
 printf("Profit: $%.2f\n", profit); // The .2 in %.2f makes sure there are only 2 digits after the decimal point.
 printf("Height: %d Length: %d\n", height, length);

 printf("To C, or not to C: that is the question.\n");

 return 0;
}
