#include <stdio.h>
#include <stdlib.h>

/*
* Write a program that receives: 1 - Salary (per hours) 2 - Total hours worked (in a month). The program should calculate and print the total monthly salary of the employee
*/

int main()
{
	float salaryPerHour;
	int totalHourWorked;

	printf("Enter your salary per hour: \n");
	scanf("%f", &salaryPerHour);
	printf("Enter the total hours worked: \n");
	scanf("%d", &totalHourWorked);

	printf("Your expected salary per month is: %f\n", salaryPerHour*totalHourWorked);

	return 0;
}
