#include<stdio.h>
union u_tag
{
	 int a;
	 long int b;
};
struct s_tag
{
  int a;
  long int b;
};
void main()
{
	struct s_tag x; //8
	union  u_tag y; //4
	printf("Memory allocation for structure = %d", sizeof(x));
    printf("\nMemory allocation for union = %d", sizeof(y));
}

