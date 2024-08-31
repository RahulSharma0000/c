//  Accept two numbers from user and swap their values
//  Accept two numbers from user and swap their values without using third variable
// Sample Input → a : 69

// Sample Input → b : 96

// Sample Output → a  = 96 , b = 69

// (A)

// #include<stdio.h>
// int main()
// {
// int a =69;
// int b = 96;
// int c;
// c=a;
// a=b;
// b=c;

// printf("a : %i\n",a);
// printf("b : %i",b);

// return 0;
// }

// (B)

#include <stdio.h>
int main()
{
    int a = 96;
    int b = 69;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a : %i \n", a);
    printf("b : %i \n", b);
    return 0;
}