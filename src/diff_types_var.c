#include <stdio.h>

int main() {
    // Declaring different types of variables
    int integerVar = 42; //Integer
    float floatVar = 3.14; //Float
    double doubleVar = 2.71828; //Double
    char charVar = 'A'; //Character
	char stringVar[] = "Hello, World!"; //String = Array of Characters
    short shortVar = 32767; //Short

    //With end
    long longVar = 123456789L; //Long
    unsigned int unsignedIntVar = -3000000000U; //Unsigned Long store more long data
    long long longLongVar = 123456789012345LL; 
    unsigned long long unsignedLongLongVar = 12345678901234567890ULL;
	int octalVar = 052; // Octal variable (leading 0 indicates octal)
    int hexVar = 0x2A; // Hexadecimal variable (0x indicates hex)

    // Printing the values of the variables
    printf("Integer: %d\n", integerVar); //d for integer, short
    printf("Float: %.2f\n", floatVar); //f for float, double
    printf("Double: %.5f\n", doubleVar); 
    printf("Character: %c\n", charVar); //c for character value
	printf("String: %s\n", stringVar); //s for string
    printf("Short: %d\n", shortVar);
    printf("Long: %ld\n", longVar); //ld for long variable
    printf("Unsigned Integer: %u\n", unsignedIntVar); //u for unsigned integer value
    printf("Long Long: %lld\n", longLongVar);
    printf("Unsigned Long Long: %llu\n", unsignedLongLongVar);
	printf("Octal: %o (decimal: %d)\n", octalVar, octalVar); // Printing the octal variable
    printf("Hexadecimal: %x (decimal: %d)\n", hexVar, hexVar); // Printing the hexadecimal variable

    return 0;
}
