[![Static Badge](https://img.shields.io/badge/Home-maker?labelColor=grey&color=grey)](https://baponkar.github.io/Learning-C)


# 4. Numeric Constants and Variables

* # Variables 

A quantity which may vary during program execution is called variable. Each Variable stres in different memory location.There are multiple types of variable present in C. Look into the table.


| S/L | Assign                   | Printing | Maximum Size (32-bit / 64-bit)                          |
|-----|--------------------------|----------|---------------------------------------------------------|
| 1   | int                      | %d       | 2,147,483,647 / 2,147,483,647                           |
| 2   | unsigned int             | %u       | 4,294,967,295 / 4,294,967,295                           |
| 3   | long int                 | %ld      | 2,147,483,647 / 9,223,372,036,854,775,807               |
| 4   | unsigned long int        | %lu      | 4,294,967,295 / 18,446,744,073,709,551,615              |
| 5   | long long int            | %lld     | 9,223,372,036,854,775,807 / 9,223,372,036,854,775,807   |
| 6   | unsigned long long int   | %llu     | 18,446,744,073,709,551,615 / 18,446,744,073,709,551,615 |
| 7   | float                    | %f       | 3.4E+38 / 3.4E+38                                       |
| 8   | short                    | %hd      | 32,767 / 32,767                                         |
| 9   | double                   | %lf      | 1.7E+308 / 1.7E+308                                     |
| 10  | long double              | %Lf      | 1.2E+4932 / 1.2E+4932                                   |
| 11  | decimal integer          | %d       | 2,147,483,647 / 2,147,483,647                           |
| 12  | octal integer            | %o       | 4,294,967,295 / 4,294,967,295                           |
| 13  | hexadecimal integer      | %x       | 4,294,967,295 / 4,294,967,295                           |
| 14  | Character                | %c       |                                                         |
| 15  | String                   | %s       |                                                         |


See the below code where I have assign different type variable and then print the value.

* `\n` include create a new line in standard output.

[Downl.oad Code](./code/different_types_variables.c)



```c
/* In this programe we just declare a variable assign the value
*  Then print the value of corresponding variable content value.
*/

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

    //-------------------
    //Character variable assigne its value by single quote ''
    char my_char = 'a';
    printf("The value of my_char = %c\n", my_char); //Output : The value of my_char =  'a'

    //String
    //String is array of multiple character
    //String variable assign by double quote ""
    my_string[] = "abra ca dabra";
    printf("The value of my_string = %s\n", my_string); //The value of my_string = abra ca dabra

}
```

## Output
```bash
The value of integer is -34
The value of unsigned_integer is 67
The value of short_int is 2567
The value of long_integer is -123456789
The value of unsigned_long_integer is 123456789
The value of unsigned_long_integer is -98123456789
The value of unsigned_long_integer is 98123456789
The value of float_val is -256.98056
The value of double_val is 5678900074.567908
The value of long_double_val is 5678900074.567908
Octal: 52 (decimal: 42)
Hexadecimal: 2a (decimal: 42)
The value of my_char = a
The value of my_string = abra ca dabra
```

* # Numeric Constant

The constants are never change during the execution of the programme.We can assign constants by using`#define` parameter. Look the below program example.

[Download Code](./code/constant.c)

```c
#include<stdio.h>

#define PI 3.1415927
#define MAX_RANGE 100
#define MIN_RANGE 0

int main(){

    prinntf("The Value of PI is %f", PI);
}
```

## Output

```bash
The Value of PI is 3.141593
```



<div style="text-align: center;">
    <button type="button" onclick="window.location.href='https://baponkar.github.io/Learning-C/Hello-World/Hello-World';" style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 5px; cursor: pointer;">
       Prev
    </button>
     <button type="button" onclick="window.location.href='https://baponkar.github.io/Learning-C/Comments/Comments';" style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 5px; cursor: pointer;">
       Next
    </button>
</div>