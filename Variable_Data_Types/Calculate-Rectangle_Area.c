#include <stdio.h>
#include <stdlib.h>

/*
 * Write a program that gets two 'double numbers'
 * @Rectangle Height
 * @Rectangle Width
 * The program should calculate and print the Area of the given rectangle
 */

int main()
{
	double height, width;
	double area;
	printf("Enter Height: \n");
	scanf("%lf", &height);
	printf("Enter Width: \n");
        scanf("%lf", &width);
	
	area = height * width;

	printf("Area of the given rectangle is: %lf\n", area);

	return 0;
	
}
