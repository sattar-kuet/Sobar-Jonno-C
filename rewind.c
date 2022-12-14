#include<stdio.h>
void main()
{
    FILE *file;
    file = fopen("D://input.txt", "r");
    char c;
    fseek(file, -81,2);
    rewind(file);
    int position = ftell(file);
    fscanf(file,"%c", &c);
    printf("%d : %c\n",position, c);

}
