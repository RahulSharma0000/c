// Build Calculator which perform these operations (+ , - , / , x , %) [MINI PROJECT]

// Case 1 :

// Sample Input →  Number 1 : 2   
// Sample Input → Operator : +
// Sample Input → Number 2 : 8     
// Sample Output → Result ⇒ 2 + 8 ⇒ 10  

     
// Case 2 :
// Sample Input → Number 1 : 10 
// Sample Input → Operator : %
// Sample Input → Number 2 : 2
// Sample Output → Result ⇒ 10 % 2 ⇒ 0 

#include<stdio.h>
int main()
{
int num1,num2;
char op;
printf("enter the num1 ");
scanf("%i",&num1);

printf("enter the num2 ");
scanf("%i",&num2);

fflush(stdin);

printf("enter the oprater ");
scanf("%c",&op);

if (op=='+')
{
   printf("addition is %i",num1+num2);
}
else if (op =='-')
{
   printf("suntraction is %i",num1-num2);
}
else if (op =='*')
{
   printf("multiplication is %i",num1*num2);
}
else if (op =='/')
{
   printf("divisable is %i",num1/num2);
}
else{
   printf("invalid operator");
}



return 0;
}