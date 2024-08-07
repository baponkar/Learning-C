
#include<stdio.h>


int main(){

    //Integer types variable
    int integer = -34;
    printf("The value of integer is %d\n", integer);

    unsigned int unsigned_integer =  67; //if we try to use -67 then the variable store highest positive number
    printf("The value of unsigned_integer is %u\n", unsigned_integer);

    short short_int = 2567;
    printf("The value of short_int is %d\n", short_int);

    long long_integer = -123456789L;
    printf("The value of long_integer is %ld\n", long_integer);

    unsigned long unsigned_long_integer = 123456789UL; //if we try to use -123456789LU then the variable store highest positive number
    printf("The value of unsigned_long_integer is %lu\n", unsigned_long_integer);

    long long long_long_integer = -98123456789LL; 
    printf("The value of unsigned_long_integer is %lld\n", long_long_integer);

    unsigned long long unsigned_long_long_integer = 98123456789LL; //if we try to use -98123456789LL then the variable store highest positive number
    printf("The value of unsigned_long_integer is %llu\n", unsigned_long_long_integer);

    //-----------------------------------------------------------------------------------
    //Floating point type variables
    float float_val = -256.980568967;
    printf("The value of float_val is %0.5f\n", float_val); //The value of float_val is -256.98056

    double double_val = 5678900074.567907890045;
    printf("The value of double_val is %lf\n", double_val);

    long double long_double_val = 5678900074.567907890045;
    printf("The value of long_double_val is %Lf\n", long_double_val);


    //-----------------------------------------------------------------------------------
    int octalVar = 052; // Octal variable (leading 0 indicates octal)
    printf("Octal: %o (decimal: %d)\n", octalVar, octalVar); // Printing the octal variable and corresponding decimal number

    int hexVar = 0x2A; // Hexadecimal variable (0x indicates hex)
    printf("Hexadecimal: %x (decimal: %d)\n", hexVar, hexVar); // Printing the hexadecimal variable and corresponding decimal number

}