#include<stdio.h>

void main()
{

     struct product
     {
        int id;
        float price;
        int stock;
     };

     struct product mango;
     mango.id = 10;
     mango.price = 85.50;
     mango.stock = 5;
     printf(" product id = %d, Product Price = %f, stock = %d ", mango.id, mango.price, mango.stock);


}
