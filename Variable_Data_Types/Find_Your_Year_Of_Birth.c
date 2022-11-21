#include <stdio.h>
#include <stdlib.h>

/*
 * Write a program that gets as input from the user
 * @current Year;
 * @Your Age;
 * The program should calculate and print the 'Year you were born'!
 */

int main()
{
	int currentYear, age;

	printf("Enter current year: \n");
	scanf("%d", &currentYear);
	printf("Enter your age: \n");
	scanf("%d", &age);

	printf("The Year you were born is: %d\n", currentYear - age);

	return 0;
}
