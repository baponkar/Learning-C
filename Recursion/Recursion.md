
[![Home Static Badge](https://img.shields.io/badge/%F0%9F%8F%A0-Home-maker?style=plastic&labelColor=grey&color=black)
](https://baponkar.github.io/Learning-C)

# 18. Recursion

Suppose We want to find the factorial of a number n is n! = n*(n-1)*(n-2)....4*3*2*1.
We create a reursive function to get the value of a factorial.

```c
#include<stdio.h>

int fact(int n);
int main(){

    int res = fact(5);
    printf("5! = %d\n", res);
    return 0;
}

int fact(int n){
    int res;
    if(n > 1){
        res = n*fact(n-1);
    }else{
        return 1;
    }
    return res;
}

```




<div style="text-align: center;">
    <button type="button" onclick="window.location.href='https://baponkar.github.io/Learning-C/Lists-and-Trees/Lists-and-Trees';" style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 5px; cursor: pointer;">
       Prev
    </button>
     <button type="button" onclick="window.location.href='https://baponkar.github.io/Learning-C/Bit-Level-Operations-and-Applications/Bit-Level-Operations-and-Applications';" style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 5px; cursor: pointer;">
       Next
    </button>
</div>


<hr>
<div style="text-align: center;">
    © 2024 Bapon Kar. All rights reserved.
</div>
<hr>