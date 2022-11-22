#include <stdio.h>
#include <stdlib.h>

/*
* Implement the Swap functionality between 2 Floating Point Variables holding 2 floating point values. Print the values of both variables BEFORE and AFTER the swapping functionality.
*/

int main()
{
	float point1 = 5.5;
	float point2 = 8.4;

	// Before the swapping
	
	printf("Floating point1 = %f and point2 = %f\n", point1, point2);

	// Swapping functionality
	float temp;

	temp = point1;
	point1 = point2;
	point2 = temp;

	// After swapping
	
	printf("Floating point1 = %f and point2 = %f\n", point1, point2);

	return 0;
}
