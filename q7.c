// (a) Write a  program that takes hours and minutes as input, and calculates the total number
// of minutes
// Sample Input → Hours : 5

// Sample Input → Minutes : 37

// Sample Output → 337 minutes

// (b) Write a program  that takes minutes as input, and display the total number of hours a minutes
// Sample Input → Minutes : 546

// Sample Output → 9 Hours, 6 Minutes

// (A) code-

#include <stdio.h>
int main()
{
    int hour, min, total_min;
    printf("Enter the hours = ");
    scanf("%i", &hour);
    printf("Enter the min = ");
    scanf("%i", &min);
    hour = hour * 60;
    total_min = hour + min;
    printf("total min is = %i", total_min);

    return 0;
}

//(B)

#include <stdio.h>
int main()
{
    int hour, min;
    printf("enter the min = ");
    scanf("%i", &min);

    hour = min / 60;
    min = min % 60;

    printf("hour is %i and min is %i", hour, min);

    return 0;
}