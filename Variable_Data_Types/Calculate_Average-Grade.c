#include <stdio.h>
#include <stdlib.h>

/*
* Write a program that gets 3 grades (int) from the user. The program should calculate and print the EXACT average.
*/

int main()
{
	int grade1, grade2, grade3;
	int sumOfGrade;
	float averageGrade;

	printf("Enter grade 1: \n");
	scanf("%d", &grade1);
	printf("Enter grade 2: \n");
        scanf("%d", &grade2);
	printf("Enter grade 3: \n");
        scanf("%d", &grade3);

	sumOfGrade = grade1 + grade2 + grade3;

	averageGrade = sumOfGrade / 3.0;

	printf("Your average grade = %lf\n", avaerageGrade);

	return 0;
}
