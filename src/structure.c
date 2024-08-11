#include<stdio.h>

typedef struct item_in_store
{
    int item_code;
    int qty_in_stock;
    float price;
} Item;



int main(){
    Item soap;
    int no_of_brands = 0;
    float total_soap_value = 0;

    while(scanf("%d %d %f", &soap.item_code, &soap.qty_in_stock, &soap.price) != EOF){
        ++no_of_brands;
        total_soap_value += soap.price * soap.qty_in_stock;
    }

    printf("Number of brands of soap in the store = %d\n", no_of_brands);
    printf("Total value of soap stocked = Rs. %.2f\n", total_soap_value);
    
}
