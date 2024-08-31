// Accept marks of 4 subjects and calculate percentage if percentage is below 35% - F ,below 45% - D ,  below 55% - C , below 75% - B , above 75% - A

// Case 1 :
// Sample Input → Mathematics : 82
// Sample Input → Science : 96
// Sample Input → English : 88
// Sample Input → Hindi : 93
// Sample Output → A (Expectation)

#include <stdio.h>
int main()
{
    int math, sci, eng, hindi, percentage;
    printf("enter mark of math : ");
    scanf("%i", &math);

    printf("enter mark of sci : ");
    scanf("%i", &sci);

    printf("enter mark of eng : ");
    scanf("%i", &eng);

    printf("enter mark of hindi : ");
    scanf("%i", &hindi);

    percentage = (math + sci + eng + hindi) / 4;

    if (percentage >= 75)
    {
        printf("Grade - A");
    }
    else if (percentage < 75 && percentage >= 55)
    {
        printf("Grade - B");
    }
    else if (percentage < 55 && percentage >= 45)
    {
        printf("Grade - C");
    }
    else if (percentage < 45 && percentage >= 35)
    {
        printf("Grade - D");
    }
    else if (percentage < 35)
    {
        printf("Grade - F");
    }

    return 0;
}