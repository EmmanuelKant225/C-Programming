#include <stdio.h>
#include <stdlib.h>

/*
* Write a program that calculates and prints: an (the n-th term of the sequence). Formula: an = a1 +(n-1) * d
* an - the value we want to calculate in a sequence
* a1 - the initial value in a sequence
* n - the total number of value in the sequence
* d - the increment
*/

int main()
{
	float a1, d;
	int n;

	printf("Enter the initial value (a1) : \n");
	scanf("%f", &a1);
	printf("Enter the increment (d) : \n");
        scanf("%f", &d);
	printf("Enter the total number of value (n) : \n");
        scanf("%d", &n);
	
	print("The n-th term of the arithmetic sequence = %f\n", a1+(n-1)*d);

	return 0;
}
