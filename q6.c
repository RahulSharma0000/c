// Write a  program that converts kilometers per hour to miles per hour
// [Miles per hour (mph) = Kilometers per hour (kmph) * 0.621371 ]

// Sample Input → Kmph  : 50

// Sample Output → Mph : 31.0686

#include <stdio.h>
int main()
{
    float kmph = 50;
    float mph = kmph * 0.621371;
    printf("kmph into mph is = %f", mph);
    return 0;
}