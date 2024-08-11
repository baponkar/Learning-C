

[![Home Static Badge](https://img.shields.io/badge/%F0%9F%8F%A0-Home-maker?style=plastic&labelColor=grey&color=black)
](https://baponkar.github.io/Learning-C)

# 12. Functions 

* Write a function whichh return addition of two integer

```c
#include<stdio.h>

//Declairing the function otherwise the main function not finding the function.
int add(int a, int b);

int main(){
    int a = 5, b = 7, res;

    res = add(a,b);

    printf("The result of add(5, 7) = %d\n", res); // Output : The result of add(5, 7) = 12
    return 0;
}

//Defining the function
int add(int a, int b){
    return a + b;
}
```


<div style="text-align: center;">
    <button type="button" onclick="window.location.href='https://baponkar.github.io/Learning-C/Logical-Expression/Logical-Expression';" style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 5px; cursor: pointer;">
       Prev
    </button>
     <button type="button" onclick="window.location.href='https://baponkar.github.io/Learning-C/Character-and-Strings/Character-and-Strings';" style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 5px; cursor: pointer;">
       Next
    </button>
</div>


<hr>
<div style="text-align: center;">
    © 2024 Bapon Kar. All rights reserved.
</div>
<hr>