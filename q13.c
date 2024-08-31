// Write a program to find the largest among three numbers 
// Sample Input → a : 1

// Sample Input → b : 12

// Sample Input → c : 56

// Sample Output → C is the largest

#include<stdio.h>
int main()
{
int a=5;
int b=3;
int c=5;

if (a>b && a>c)
{
    printf("a is greater");
}
else if (b>a && b>c)
{
   printf("b is a greater");
}
else
{
    printf("c is greater");
}

return 0;
}