// Write a program to check whether an alphabet is a vowel or a consonant.
// Case 1 :
// Sample Input → Character : A
// Sample Output → Vowel

// Case 2 :
// Sample Input → Character : X
// Sample Output → Consonant

#include <stdio.h>
int main()
{
    char alph;
    printf("enter the alphabet : ");
    scanf("%c", &alph);

    if (alph == 'a' || alph == 'i' || alph == 'o' || alph == 'e' || alph == 'u')
    {
        printf("vowel");
    }
    else
    {
        printf("constant");
    }

    return 0;
}