#include<stdio.h>



typedef enum{ false, true } bool;

typedef enum{ North, East, West, South} direction;


int main(){
    bool bool_var = true;

    if(bool_var){
        printf("%d\n", bool_var);
    }else{
         printf("%d\n", bool_var);
    }

    direction forward_direction = North;

    if(forward_direction == North){
        printf("The current direction is North!\n");
    }else{
        printf("This is not North direction.\n");
    }

    return 0;
}