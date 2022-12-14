#include<stdio.h>
void main()
{
     int a,b;
     FILE *file;
     file = fopen("D://input1.txt", "r");
     fscanf(file,"%d %d", &a, &b);
     printf("a = %d, b = %d", a,b);
     fclose(file);

}

