#include <stdio.h>
#include<string.h>
void main()
{
       char line1[61];
       char line2[61];
       printf("input a line : ");
       //scanf("%s", &line1);
       gets(line1);
       printf("\n line1 = %s",line1);
       printf("\n\n input a line again: ");
       gets(line2);
       puts(line2);
}
