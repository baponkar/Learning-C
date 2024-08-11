
[![Home Static Badge](https://img.shields.io/badge/%F0%9F%8F%A0-Home-maker?style=plastic&labelColor=grey&color=black)
](https://baponkar.github.io/Learning-C)

# 7. Input and Output


* Input :

 `scanf()` function is used to get input from standard input.
Suppose we want to read the value of `int a` by scanf function
`scanf("%d", &a)` Here &a is tell the compiler the memory location of variable a. "%d" for integer. We can read multiple variable by scanf function.

```c
#include<stdio.h>

int main(){
    int a, b;
    float f;
    char c;

    //reading a, b, f, c
    scanf("%d %d %f %c", &a, &b, &f, &c);
    //The space starts a new variable

    return 0;
}
```

We can read the the string by standard input by scanf function but the string is without space.

```c
#include<stdio.h>

int main(){
    char s[50];//need to mention the character array length

    //reading s
    //We can read "abracadabra" by the below function
    //But "abra ca dabra" is not readable by above function
      scanf("%49s", &s);//read 49 length array string and end of char '\0' in 50th position
    

    return 0;
}
```

Reading string which have space
```c
#include<stdio.h>

int main(){
    char s[50];//need to mention the character array length

    //reading s
    //We can read "abracadabra" by the below function
    //"abra ca dabra" is  readable by above function
     gets(str);  // Not safe, avoid using this
    

    return 0;
}
```

Reading string by fgets function
```c
#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);  // Safe: reads up to 99 characters + null terminator
    //stdin means standard input
    printf("You entered: %s\n", str);
    return 0;
}
```

If you're working in a POSIX environment, getline is a powerful and flexible way to read an entire line of input.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = NULL;
    size_t len = 0;
    printf("Enter a string: ");
    getline(&str, &len, stdin);
    printf("You entered: %s\n", str);
    free(str);  // Don't forget to free the memory
    return 0;
}
```

We can read the different type variables  by the following 
| S/L | Variable type            | Reading  | 
|-----|--------------------------|----------|
| 1   | int                      | %d       |
| 2   | unsigned int             | %u       |
| 3   | long int                 | %ld      |
| 4   | unsigned long int        | %lu      |
| 5   | long long int            | %lld     |
| 6   | unsigned long long int   | %llu     | 
| 7   | float                    | %f       |
| 8   | short                    | %hd      |
| 9   | double                   | %lf      |
| 10  | long double              | %Lf      |
| 11  | decimal integer          | %d       |
| 12  | octal integer            | %o       |
| 13  | hexadecimal integer      | %x       |
| 14  | Character                | %c       |
| 15  | String                   | %s       |

* Output
We can print any variable and string by printf function.

```c
#include<stdio.h>

int main(){

    //printing string
    printf("Hello World!\n"); // \n creates a new line

    int a = 23;
    printf("%d\n", a);//printing the value of a

    int f = 4467.889054;
    printf("%5.3f", f)//Output 4467.889 printing float value after point 3 decimal point and before point
}
```




Printing output in C can be done using several standard functions. The most commonly used function is `printf`. Here are some basic examples to illustrate different ways of printing in C:

### 1. **Printing Strings and Text**

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

- **`\n`**: This is a newline character that moves the cursor to the next line after printing the text.

### 2. **Printing Variables**

You can print different types of variables by using format specifiers.

```c
#include <stdio.h>

int main() {
    int age = 25;
    float height = 5.9;
    char grade = 'A';
    char name[] = "John";

    printf("Name: %s\n", name);     // %s is for strings
    printf("Age: %d\n", age);       // %d is for integers
    printf("Height: %.1f\n", height);  // %f is for floats, .1 specifies one decimal place
    printf("Grade: %c\n", grade);   // %c is for characters

    return 0;
}
```

- **Format Specifiers**:
  - `%d` or `%i` : Integer
  - `%f` : Floating-point number
  - `%c` : Character
  - `%s` : String
  - `%x` : Hexadecimal integer
  - `%o` : Octal integer
  - `%p` : Pointer address

### 3. **Formatting Output**

You can control the width, precision, and alignment of your output.

```c
#include <stdio.h>

int main() {
    float pi = 3.14159;
    int number = 42;

    printf("Pi to two decimal places: %.2f\n", pi);   // Output: 3.14
    printf("Right-aligned number: %5d\n", number);   // Output: "   42" (width of 5 characters)
    printf("Left-aligned number: %-5d\n", number);   // Output: "42   " (width of 5 characters, left-aligned)
    
    return 0;
}
```

- **`%.2f`**: Limits the floating-point number to 2 decimal places.
- **`%5d`**: Prints an integer with a minimum width of 5 characters, right-aligned.
- **`%-5d`**: Prints an integer with a minimum width of 5 characters, left-aligned.

### 4. **Printing Multiple Variables in a Single `printf` Statement**

```c
#include <stdio.h>

int main() {
    int x = 10, y = 20;
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
```

- You can pass multiple arguments to `printf`, and they will be printed in the order they are provided.

### 5. **Printing Special Characters**

To print special characters like double quotes or backslashes, use escape sequences.

```c
#include <stdio.h>

int main() {
    printf("He said, \"Hello!\"\n");
    printf("This is a backslash: \\\n");
    return 0;
}
```

- **`\"`**: Prints a double quote.
- **`\\`**: Prints a backslash.

### 6. **Printing to a File**

You can also use `fprintf` to print to a file.

```c
#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w");  // Open a file for writing
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(file, "Hello, File!\n");  // Print to the file
    fclose(file);  // Close the file
    return 0;
}
```

This will write "Hello, File!" to a file named `output.txt`.

These are some of the basic and most common ways to print output in C. The `printf` function is very powerful and supports many more formatting options for various data types.

We can print character by putchar() as well as printf function.

```c
 1 #include<stdio.h>
  2
  3 int main(){
  4
  5         char c = 'H';
  6         putchar(c); //printing character
  7         return 0;
  8 }
  ```

  We can print string by putchar() function by using **for** and **while** loop.

  ```c
   1 #include<stdio.h>
  2
  3
  4 int main(){
  5         char string[50] = "This is a string\n"; // This string's last position end of string i.e. '\0' character added.
  6
  7         for(int i=0; i<50; i++){
  8                 putchar(string[i]); //Output : This is a string
  9         }
 10
 11
 12         return 0;
 13 }
 ```

 ```c
  1 #include<stdio.h>
  2
  3
  4 int main(){
  5         char string[50] = "This is a string\n";
  6
  7         int i = 0;
  8         while(string[i] != '\0'){
  9                 putchar(string[i]);
 10                 i++;
 11         }
 12
 13
 14         return 0;
 15 }
 ```

 


<div style="text-align: center;">
    <button type="button" onclick="window.location.href='https://baponkar.github.io/Learning-C/Arithmetic-Expression/Arithmetic-Expression';" style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 5px; cursor: pointer;">
       Prev
    </button>
     <button type="button" onclick="window.location.href='https://baponkar.github.io/Learning-C/Conditional-Statements/Conditional-Statements';" style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 5px; cursor: pointer;">
       Next
    </button>
</div>


<hr>
<div style="text-align: center;">
    © 2024 Bapon Kar. All rights reserved.
</div>
<hr>