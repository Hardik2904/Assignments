/* Program to find area of circle, rectangle, triangle */
#include<stdio.h>
#define PI 3.141592
int main()
{
    float radius, length, width, base, height,circarea, recarea, triarea;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter width of rectangle: ");
    scanf("%f", &width);
    printf("Enter base of triangle: ");
    scanf("%f", &base);
    printf("Enter height of triangle: ");
    scanf("%f", &height);

    circarea = PI * radius * radius;
    printf("\nArea of Circle is : %.2f\n", circarea);
    recarea = length * width;
    printf("Area of Rectangle is : %.2f\n", recarea);
    triarea = 0.5 * base * height;
    printf("Area of Triangle is : %.2f\n", triarea);
    return 0;
}
