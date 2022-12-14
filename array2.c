#include<stdio.h>

void main()
{

    int data[9] = { 100, 20, 14, 5, 60, 80, 5, 9, 45 };
    int maximum = data[0];
    for( int i=1; i<9; i++ ){
        if(data[i] > maximum){
            maximum = data[i];
        }
    }

    printf("%d", maximum);

}
