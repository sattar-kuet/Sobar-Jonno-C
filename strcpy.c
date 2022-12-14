#include <stdio.h>
#include<string.h>
void main()
{
        char first[10]="KUET";
    	char second[10]="EEE";
    	printf("Before executing strcpy() : \n");
    	printf("first[10] : %s\n",first);
    	printf("second[10] : %s\n",second);

        strcpy(first, second);

    	printf("\n\nAfter executing strcpy() : \n");
    	printf("first[10] : %s\n",first);
    	printf("second[10] : %s\n\n",second);

}
