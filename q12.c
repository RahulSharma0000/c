// Write a  program to find whether a given year is a leap year or not

// Case 1 :

// Sample Input → 2024

// Sample Output → Leap Year

#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%i", &year);

    if (year % 400 == 0)
    {
        printf("it is leap year");
    }
    else if (year % 100 != 0 && year % 4 == 0)
    {
        printf("it is leap year");
    }
    else
    {
        printf("it is not Leap Year");
    }

    return 0;
}