/*
Storing and retriving data from the top of a stack
*/
#include <stdio.h>

#define STACK_SIZE 80
#define FALSE 0
#define TRUE 1

char stack[STACK_SIZE];
typedef int bool;
bool stack_empty, stack_full;
int top_of_stack; //top_of_stack is the arrayy index of stack[]. it specifies from where a data can be stored or retrived

void push(char pushed_char){
    if(stack_full){
        printf("Error - Stack is Full!\n");
    }else{
        ++top_of_stack;
        stack[top_of_stack] = pushed_char;
        stack_empty = FALSE;
    }
}

char pop(){
    char temp;
    if(stack_empty){
        printf("Error - Stack is empty!");
        return(' ');
    }else{
        temp = stack[top_of_stack];
        --top_of_stack;
        if(top_of_stack <= 0){
            stack_empty = TRUE;
            return(temp);
        }
    }
}


int main(){
    return 0;
}