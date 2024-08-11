#include<stdio.h>
#include<string.h>
#include "myheader.h"

int main(){

    char mystr[] = "  Hello World!  ";
    int length = strlen(mystr);

    //Use function prototypes
    printf("%d\n", length);

    lower(mystr);
    printf("%s\n", mystr);

    upper(mystr);
    printf("%s\n",mystr);

    capitalize(mystr);
    printf("%s\n", mystr);

    trim(mystr);
    printf("%s\n", mystr);


     // Use the macro
    printf("Value of PI: %f\n", PI);

    // Use the constant
    //printf("Max buffer size: %d\n", MAX_BUFFER_SIZE);

    // Use the type definition
    Point p = {10, 20, 0};
    printf("Point coordinates: (%.5f, %.5f, %.5f)\n", p.x, p.y, p.z);

    return 0;
}
