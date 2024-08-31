// Write a  program that prints the perimeter of a rectangle to take its height and width as input
// [Perimeter = 2 * (Height + Width)

// Sample Input → Height : 10

// Sample Input → Width : 15

// Sample Output → Perimeter of the rectangle is  50

#include <stdio.h>
int main()
{
    int Height = 10;
    int Width = 15;
    int para = 2 * (Height + Width);

    printf("Parameter is %i", para);
    return 0;
}