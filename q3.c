// Write a  program to compute the perimeter and area of a circle with a given radius
// [Perimeter = 2 *  π * r] [Area = π * r ^ 2  ]  ]

// Sample Input → Radius :

// Sample Output → Perimeter of the circle is

// Sample Output → Area of the circle is

#include <stdio.h>
int main()
{
    int radius;

    printf("enter the radius = ");
    scanf("%i", &radius);

    float pari = 2 * 3.14 * radius;
    float area = 3.14 * radius * radius;
    printf("parimetr is %f", pari);
    printf("Area is %f", area);

    return 0;
}