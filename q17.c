// Write a program to input cost price and selling price of a product and check profit or loss
// Sample Input → Cost Price : 150

// Sample Input → Selling Price : 200

// Sample Output → Profit  of 50

#include <stdio.h>
int main()
{
    int cp, sp;
    printf("enter the cost price ");
    scanf("%i",&cp);
    printf("enter the selling price ");
    scanf("%i",&sp);

    if (cp<sp)
    {
        printf("profit of %i", sp - cp);
    }
    else
    {
        printf("loss of %i", cp - sp);
    }

    return 0;
}