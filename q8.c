// Design a program that calculates the simple interest based on user-provided principal, rate, and time
// [ Simple Interest = ( Principal x Interest x Time )/ 100  ]

#include <stdio.h>
int main()
{
    int principal, rate, time, interest;
    printf("enter the principal value = ");
    scanf("%i", &principal);
    printf("enter the rate value = ");
    scanf("%i", &rate);
    printf("enter the time value = ");
    scanf("%i", &time);
    
    interest = (principal * rate * time) / 100;

    printf("simple interest is = %i", interest);
    return 0;
}