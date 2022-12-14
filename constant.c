#include<stdio.h>
#define g 9.81
void main()
{
    float r = 10;
    const float PI = 3.1416;
    float area_of_circle = PI*r*r;
    float m = 40;
    float weight = m*g;
    printf("%f %f", area_of_circle, weight);
}
