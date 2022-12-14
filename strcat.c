 #include <stdio.h>
  #include<string.h>
  int main()
 {
    char string1[65]="Hellow ";
    char string2[65]="world!";
    printf("Before executing strcat() : \n");
    printf("\nstring1 = %s",string1);
    printf("\nstring2 = %s",string2);

    strcat(string1,string2);

    printf("\n\nAfter executing strcat() : \n");
    printf("\nstring1 = %s",string1);
    printf("\nstring2 = %s\n\n",string2);
    return 0;
 }
