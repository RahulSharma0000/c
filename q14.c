// Write a  program to check whether a given number is positive or negative and also check whether the given number is even or odd
// Sample Input → a : 12

// Sample Output → Positive and Even

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no. ");
    scanf("%i", &n);

    if (n == 0)
    {
        printf("zero");
    }
    else if (n > 0)
    {
        if (n % 2 == 0)
        {
            printf("no. is positive and even");
        }
        else
        {
            printf("no. is positive and odd");
        }
    }
    else
    {
        if (n % 2 == 0)
        {

            printf("no. is negative and even");
        }
        else
        {
            printf("no. is negative and odd");
        }
    }

    return 0;
}