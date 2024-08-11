#include<stdio.h>

typedef struct 
    {
        int item_code;
        int qty_in_stock;
        float price
    } Item;


int main(){
    

    Item reebok_boot;

    //setting Item's component
    reebok_boot.item_code = 23456;
    reebok_boot.qty_in_stock = 23;
    reebok_boot.price = 45.67f;
    
    //Getting Item's component
    int item_code = reebok_boot.item_code;
    int qty_in_stock = reebok_boot.qty_in_stock;
    float price = reebok_boot.price;

    printf("item_code = %d, qty_in_stock = %d, price = %f\n", item_code, qty_in_stock, price);

    return 0;
}