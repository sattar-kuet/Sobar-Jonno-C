#include<stdio.h>

void main()
{
    FILE *file;
    file = fopen("D:\\input.txt","a");
    int quantity;
    float price;
    printf("Price = ? ");
    scanf("%f", &price);

    printf("Quantity = ? ");
    scanf("%d", &quantity);
    float total_price = (float) price*quantity;
    fprintf(file,"\nUnit Price = %f\nQuantity = %d\nTotal Price = %f\n\n", price, quantity, total_price);
    fclose(file);
    printf("File created successfully!");

}
