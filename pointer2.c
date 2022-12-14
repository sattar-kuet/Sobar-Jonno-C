#include<stdio.h>
void main()
{
	  int a,b,c;
	  int *p1,*p2;
	  p1=&a;
	  p2=&b;
	  a=10;
	  b=20;
      c=a**p1**p2+25;
      printf(" c =  %d",c);

}

