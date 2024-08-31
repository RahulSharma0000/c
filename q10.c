// Write a  program to calculate a bike’s average consumption from the given total distance (integer value) travelled (in km) and spent fuel (in litters, float number – 2 decimal points)
// [ Average =   Total Distance  / Fuel Consumed ]

// Sample Input → Fuel Consumed  : 5

// Sample Input → Total Distance : 350
// Sample Output → Average ⇒ 70

#include <stdio.h>
int main()
{
    int fuel, total_dist, avg;
    printf("enter the fuel consumed : ", fuel);
    scanf("%i", &fuel);
    printf("enter the total distance : ", total_dist);
    scanf("%i", &total_dist);

    avg = total_dist / fuel;

    printf("average is %i", avg);
    return 0;
}