// Write a program to read the age of a candidate and determine whether it is eligible
// for casting his/her own vote

// Case 1 :                 
// Sample Input → Age : 12 
// Sample Output → Go to home and watch pogo

// Case 2 :
// Sample Input → Age :  19
// Sample Output → Vote for Sheryians

#include<stdio.h>
int main()
{
int age;
printf("Enter the Age : ");
scanf("%i",&age);

if (age>=18)
{
    printf("go and vote ");

}
else
{
    printf("go home and warch pogo");
}


return 0;
}