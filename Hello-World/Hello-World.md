[![Static Badge](https://img.shields.io/badge/Home-maker?labelColor=grey&color=grey)](https://baponkar.github.io/Learning-C)

# Hello World programe

![Gif](./Video/screen_record_of_hello.gif)

The simple and first programe it will print `Hello World!` . The file save with `hello.c` .
[Download Code](./code/hello.c)

```(c)
#include<stdio.h>

int main(){
    printf("Hello World!");

    return 0;
}
```

Generating Binary file by gcc by `gcc hello.c -o hello_world.bin` which generate a new  binary file `hello_world.bin` and run the binary file by `./hello.bin`


```(c)
user@computer:~$ gcc hello_world.c -o hello_world.bin
user@computer:~$ ./hello_world.bin
user@computer:~$ Hello World!
user@computer:~$
```