// Write a  program to accept two integers and check whether they are equal or not

// Case 1 :      Sample Input → a : 69

//               Sample Input → b:  69

//               Sample Output → Equal

// Case 2 :      Sample Input → a : 69

//               Sample Input → b : 96

//               Sample Output → Not Equal

#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the value of a : ");
    scanf("%i", &a);
    printf("enter the value of b : ");
    scanf("%i", &b);

    if (a == b)
    {
        printf("EQUAL");
    }
    else
    {
        printf("NOT EQUAL");
    }

    return 0;
}