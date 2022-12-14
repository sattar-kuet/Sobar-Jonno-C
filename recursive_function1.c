#include <stdio.h>
int i = 1;
void ghost()
{
    printf("I am ghost %d\n", i);
    i++;
    if(i<11){
        ghost();
    }


}
void main()
{
    ghost();
}

