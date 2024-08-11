#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

// Stack structure
typedef struct {
    int top;
    char items[MAX];
} Stack;

// Function prototypes
void push(Stack *s, char item);
char pop(Stack *s);
char peek(Stack *s);
int isEmpty(Stack *s);
int precedence(char ch);
int isOperator(char ch);
void infixToPostfix(char infix[], char postfix[]);

// Push item to stack
void push(Stack *s, char item) {
    if (s->top < MAX - 1) {
        s->items[++(s->top)] = item;
    } else {
        printf("Stack Overflow\n");
    }
}

// Pop item from stack
char pop(Stack *s) {
    if (!isEmpty(s)) {
        return s->items[(s->top)--];
    } else {
        printf("Stack Underflow\n");
        return '\0';
    }
}

// Peek at top item of stack
char peek(Stack *s) {
    if (!isEmpty(s)) {
        return s->items[s->top];
    } else {
        return '\0';
    }
}

// Check if stack is empty
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Return precedence of operator
int precedence(char ch) {
    switch (ch) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return 0;
    }
}

// Check if character is an operator
int isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^';
}

// Convert infix to postfix expression
void infixToPostfix(char infix[], char postfix[]) {
    Stack s;
    s.top = -1;
    int i, k = 0;

    for (i = 0; infix[i] != '\0'; i++) {
        if (isdigit(infix[i]) || isalpha(infix[i])) {
            postfix[k++] = infix[i];
        } else if (infix[i] == '(') {
            push(&s, infix[i]);
        } else if (infix[i] == ')') {
            while (!isEmpty(&s) && peek(&s) != '(') {
                postfix[k++] = pop(&s);
            }
            pop(&s); // Pop the '('
        } else if (isOperator(infix[i])) {
            while (!isEmpty(&s) && precedence(peek(&s)) >= precedence(infix[i])) {
                postfix[k++] = pop(&s);
            }
            push(&s, infix[i]);
        }
    }

    while (!isEmpty(&s)) {
        postfix[k++] = pop(&s);
    }

    postfix[k] = '\0';
}

int main() {
    char infix[MAX], postfix[MAX];

    printf("Enter infix expression: ");
    fgets(infix, MAX, stdin);
    infix[strcspn(infix, "\n")] = '\0';  // Remove newline character from input

    infixToPostfix(infix, postfix);

    printf("Postfix expression: %s\n", postfix);

    return 0;
}
