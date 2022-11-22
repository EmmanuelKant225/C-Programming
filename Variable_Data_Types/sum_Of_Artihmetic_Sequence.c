#include <stdio.h>
#include <stdlib.h>

/*
* Write a program that calculates and prints Sn(Sum of the sequence). The program should read from the user: n-th Element(an), Initial Term (a1), and Total terms (n)
* Formula: Sn = (a1+an) * n/2
*/

int main()
{
	float sum, an, a1;
	int n;
	
	printf("Enter n-th element - total element - in the sequence: \n");
	scanf("%f", &an);
	printf("Enter the initial element - first value - in the sequence: \n");
	scanf("%f", &a1);
	prinf("Enter the total terms: \n");
	scanf("%d", &n);

	sum = (a1+an) * n/2;

	printf("The sum of your sequence = %f\n", sum);

	return 0;
}
