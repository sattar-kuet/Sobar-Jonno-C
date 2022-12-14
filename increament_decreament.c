#include<stdio.h>
void main()
{
    int a = 10;
        a = a+1;
        printf("a = %d\n", a);

         a += 1;
         printf("a = %d\n", a);

         a++;

         printf("a = %d\n", a);

         a--;
         printf("a = %d\n", a);

         ++a;
         printf("a = %d\n", a);

         int b = 10;
         int c = 10;
         int x = b++ + 10; // 21
         int y = ++c + 10; // 21

         printf("b = %d, c = %d, x = %d, y = %d",b,c, x, y);
}
