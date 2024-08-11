/*
--------------------------------------------------------------------------------------------------------------
Description :   In this program created a new datatype 'bool' . Creating a STACK which have FIFO functionality
                by push() and pop() function. Then make a infix expression into postfix expression by using
                those stack.
Build Date  :   28/07/2024
Last Update :   28/07/2024
Developer   :   Bapon Kar
Reference   :   Rajaraman v. , 2014, Computer Programming in C, PHI Learning Limited, Delhi-110092,
Source      :   https://gist.github.com/baponkar/3da48e392ba6b2313f22abb39d0c083d
Licence     :   GNU GPL v3.0
Contact     :   baponkar@gmail.com  
---------------------------------------------------------------------------------------------------------------               
*/
#include <stdio.h>  //Standard Input Output Library for printing
#include<ctype.h>  //provide isupper function
#include<stdlib.h> //provide exit function
#include<string.h> //provide strlen function

#define STACK_SIZE 80
#define FALSE 0
#define TRUE 1

char stack[STACK_SIZE];
typedef int bool;
bool stack_empty, stack_full;
int top_of_stack; //top_of_stack is the array index of stack[]. it specifies from where a data can be stored or retrived

enum symbol_type {LETTER, OPERATOR, LEFT_PAREN, RIGHT_PAREN};

//Initialization of function
char pop(void);
void push(char pushed_char);
enum symbol_type nature_of( char scanned_char);
int precedence(char given_char);



int main(){
    int i, k, in_str_length, len_postfix;
    char scanned_char, infix_string[80], postfix_string[80], stack_char;
    bool stack_prec_low, match_found, error_flag;

    //Initialize variables
    stack_prec_low = TRUE;
    stack_empty = TRUE;
    stack_full = FALSE;
    top_of_stack = 0;

    fgets(infix_string, sizeof(infix_string), stdin);
    in_str_length = strlen(infix_string);
    scanned_char = infix_string[0];
    i = 0; k = 0;

    while (i < in_str_length){
        switch (nature_of(scanned_char)){
        case LETTER:
            postfix_string[k] = scanned_char;
            ++k;
            break;

        case OPERATOR:
            if(stack_empty){
                push(scanned_char);
                break;
            }else{
                do {
                    stack_char = pop();
                    if(precedence(stack_char) >= precedence(scanned_char)){
                        postfix_string[k] = stack_char;
                        ++k;
                        stack_prec_low = FALSE;
                    }else{
                        stack_prec_low = TRUE;
                        push(stack_char); // Push back the stack_char as it has lower precedence
                    }
                }while ((!stack_prec_low) && (!stack_empty));
            }

            if(stack_prec_low){
                push(stack_char);
                push(scanned_char);
            }else{
                push(scanned_char);
            }
            break;

        case LEFT_PAREN:
            push(scanned_char);
            break;

        case RIGHT_PAREN:
            do{
                stack_char = pop();
                if(stack_char == '(' ){
                    match_found = TRUE;
                }else{
                    postfix_string[k] = stack_char;
                    ++k;
                    match_found = FALSE;
                }
            }while((!match_found) && (!stack_empty));
            if(!match_found){
                printf("Matching left parenthesis not found\n");
                error_flag = TRUE;
                exit(1);
            }
            break;
        
        default:
            error_flag = TRUE;
            printf("Error in scanned character\n");
            exit(1);
            break;
        }

        ++i;
        scanned_char = infix_string[i];
    }

    //End of while (scanned_char != '\0')

    while (!stack_empty){
        stack_char = pop();
        postfix_string[k] = stack_char;
        ++k;
    }
    postfix_string[k] = '\0';

    //Length of postfix string is k-1
    len_postfix = k - 1;
    printf("Input Expression\n");
    for(i=0; i<= in_str_length; ++i){
        putchar(infix_string[i]);
    }

    putchar('\n');

    printf("Postfix Expression\n");
    for (i=0; i<= k-1; ++i){
        putchar(postfix_string[i]);
    }

    putchar('\n');

    return 0;
}

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

enum symbol_type nature_of( char scanned_char){
    if(isupper(scanned_char)){
        return(LETTER);
    }
    if((scanned_char == '-') || (scanned_char == '+') || (scanned_char == '*') || (scanned_char == '/')){
        return(OPERATOR);
    }
    if(scanned_char == '('){
        return(LEFT_PAREN);
    }
    if(scanned_char == ')'){
        return(RIGHT_PAREN);
    }
}

int precedence(char given_char){
    switch (given_char)
    {
    case '*':
        return(4);
        break;
    case '/':
        return(4);
        break;
    case '+':
        return(3);
        break;
    case '-':
        return(3);
        break;
    case '(':
        return(2);
        break;
    case ')':
        return(1);
        break;

    default:
        printf("Error in given_char!\n");
        return(0);
        break;
    }
}