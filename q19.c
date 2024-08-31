// Write a program to read any day number in integer and display the day name in word format.
// Case 1 :
// Sample Input →  Day : 2    
// Sample Output → Tuesday 

// Case 2 :
// Sample Input → Day : 4  
// Sample Output → Thursday 

#include<stdio.h>
int main()
{
int day;
printf("enter the day in no. : ");
scanf("%i",&day);

if (day == 0)
{
    printf("invalid no.");
}
else if (day == 1)
{
    printf("Monday");
}
else if (day == 2)
{
    printf("Tuesday");
}
else if (day == 3)
{
    printf("wednesday");
}
else if (day == 4)
{
    printf("thrusday");
}
else if (day == 5)
{
    printf("Friday");
}
else if (day == 6)
{
    printf("saturday");
}
else if (day == 7)
{
    printf("sunday");
}
else{
    printf("invalid day no.");
}

return 0;
}