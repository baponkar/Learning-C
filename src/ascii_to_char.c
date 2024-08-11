#include<stdio.h>

int main(){
    int ascii;
    printf("Enter a ascii code to see the Character: ");
    scanf("%d", &ascii);

    printf("The character is %c for ascii code %d\n", (char) ascii, ascii);

    return 0;
}