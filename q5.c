// Create a program that converts temperatures from Celsius to Fahrenheit
// [ Fahrenheit= ( Celsius * 9 / 5) + 32 ]

// Sample Input → Celsius  : 36

// Sample Output → Fahrenheit : 96.8

#include <stdio.h>
int main()
{
    float celsius;
    printf("enter the celsius = ");
    scanf("%f", &celsius);

    float fehrenheit = (celsius * 9 / 5) + 32;
    printf("celsius in fehrenheit is = %f", fehrenheit);

    return 0;
}
