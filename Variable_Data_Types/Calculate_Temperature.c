#include <stdio.h>
#include <stdlib.h>

/*
* Write a program that gets from the user a temperature ("double") in Celsius Degrees. 
* The program should calculate and convert the temprature from Celsius Degrees to Fahrenheit Degrees and print it. Formula: T(F) = T(C) * 1.8 + 32
*
* Write another program that gets from the user a temperature ("Double") in Fahrenheit Degrees.
* The program should calculate and convert the temperature  from Fahrenheit Degrees to Celsius Degrees and print it. Formula: T(C) = (T(F) - 32) / 1.8
*/

int main()
{
	double tempCelsius, tempFahrenheit;

	// First Program
	/*
	printf("Enter the temperature in Celsius Degrees: \n");
	scanf("%lf", &tempCelsius);
	
	
	tempFahrenheit = tempCelsius * 1.8 + 32;
	printf("The temperature in Fahrenheit = %lf\n", tempFahrenheit);
	*/

	// Second Program
	
	printf("Enter the temperature in Fahrenheit Degrees: \n");
        scanf("%lf", &tempFahrenheit);


        tempCelsius = (tempFahrenheit - 32) / 1.8;
        printf("The temperature in Celsius = %lf\n", tempCelsius);


	return 0;
}
