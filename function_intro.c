#include<stdio.h>

float divide(int a, int b)
{
    float c = (float)a/b;
    return c;
}

void main()
{
     float result = divide(10,20);
     printf("%f", result);

}
