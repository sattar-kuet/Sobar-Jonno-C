#include<stdio.h>

void main()
{
    FILE *file;
    file = fopen("D:\\input.txt","w");
    int quantity;
    float price;
    printf("Price = ? ");
    scanf("%f", &price);

    printf("Quantity = ? ");
    scanf("%d", &quantity);
    float total_price = (float) price*quantity;
    fprintf(file,"Unit Price = %f\nQuantity = %d\nTotal Price = %f", price, quantity, total_price);
    fclose(file);
    printf("File created successfully!");

}
