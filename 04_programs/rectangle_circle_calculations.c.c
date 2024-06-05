// Program #4 : Calculate Area and Perimeter of Rectangle, Area and Circumference of Circle
#include <stdio.h>

int main()
{
    float length, breadth, radius;
    float area_rect, perimeter_rect, area_circle, circumference_circle;

    printf("Enter the length and breadth of the rectangle: ");
    scanf("%f %f", &length, &breadth);

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area_rect = length * breadth;
    perimeter_rect = 2 * (length + breadth);

    area_circle = 3.14159 * radius * radius;
    circumference_circle = 2 * 3.14159 * radius;

    printf("Area of Rectangle: %.2f\n", area_rect);
    printf("Perimeter of Rectangle: %.2f\n", perimeter_rect);
    printf("Area of Circle: %.2f\n", area_circle);
    printf("Circumference of Circle: %.2f\n", circumference_circle);

    return 0;
}
