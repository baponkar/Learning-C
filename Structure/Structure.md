
[![Home Static Badge](https://img.shields.io/badge/%F0%9F%8F%A0-Home-maker?style=plastic&labelColor=grey&color=black)
](https://baponkar.github.io/Learning-C)

# 15. Structure

Creating a structure Item which have three components item_code, qty_in_stock, and price.
```c
struct item
{
    int item_code;
    int qty_in_stock;
    float price
};

struct item reebok_boot, soap, hair_oil;//We need to mention struct and item to creating item type struct variables
```

Creating sabove structure again by using typedef.

```c
typedef struct item
{
    int item_code;
    int qty_in_stock;
    float price
} Item;

Item reebok_boot, soap, hair_oil; //We did not mention struct in this line
```
typedef creates simple 

```c
//Setting the struct component value

reebok_boot = {
    item_code = 23456;
    qty_in_stock = 23;
    price = 45.67;
}

//Getting the struct component value

int item_code = rebook_boot.item_code;
int qty_in_stock = rebook_boot.qty_in_stock;
int price = rebook_boot.price;
```

* The whole code of creating a struct variable
```c
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
```

* We can also create an array of struct variables

```c
typedef struct 
    {
        int item_code;
        int qty_in_stock;
        float price
    } Item;

    Item inventory[100];

    //Setting first item
    inventory[0].item_code = 23456;
    inventory[0].qty_in_stock = 23;
    inventory[0].price = 45.67f;
    //Similary we can use for or while loop to setup all elements of array
```











<div style="text-align: center;">
    <button type="button" onclick="window.location.href='https://baponkar.github.io/Learning-C/Enumerated-Data-Type-and-Stacks/Enumerated-Data-Type-and-Stacks';" style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 5px; cursor: pointer;">
       Prev
    </button>
     <button type="button" onclick="window.location.href='https://baponkar.github.io/Learning-C/Pointer-Data-Type-and-its-Application/Pointer-Data-Type-and-its-Application';" style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 5px; cursor: pointer;">
       Next
    </button>
</div>


<hr>
<div style="text-align: center;">
    © 2024 Bapon Kar. All rights reserved.
</div>
<hr>