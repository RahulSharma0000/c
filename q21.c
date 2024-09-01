// Write a program to accept the height of a person in centimeter and categorize the person
// according to their height if below 150 he is dwarf if above 150 and below 200 average and
// above 200 tall
// Case 1 :
// Sample Input →  Height : 223       
// Sample Output →  Tall guy (Lambu)     

// Case 2 :
// Sample Input → Height : 143  
// Sample Output → Chotu 2 chai lana  

#include<stdio.h>
int main()
{
int height;
printf("enter the Height : ");
scanf("%i",&height);

if (height<150)
{
   printf("dwarf , buttkun 2 chai");
}
else if (height>=150 && height< 200)
{
    printf("average");
}
else if (height>=200)
{
    printf("tall (lambu)");
}


return 0;
}