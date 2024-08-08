[![Static Badge](https://img.shields.io/badge/Home-maker?labelColor=grey&color=grey)](https://baponkar.github.io/Learning-C)
# Arithmatic Expression



| Operator       | Use | Details                                        |
|----------------|-----|------------------------------------------------|
| Addition       | +   |a + b gives addition value                      |
| Multiplication | *   | a * b goves multiplication                     |
| Division       | /   | a/b gives division                             |
| Remainder      | %   | a%b gives the reminder when we divide a with b |
| Subtraction    | -   | a - b gives subtracted result                  |
| Increment      | ++  | a++, ++a,                                      |
| Decrement      | --  | a--, --a                                       |

## Increment :
Increment operator ++ increse the value of a integer variable. There are two types increment operation pre increment (++a) and post increment (a++) operation.

-  Pre Increment : If we make only ++a will increse the value of a by one. Suppose `b = ++a` , here first increase  the value of a by 1 and then set value of b by the incresed value of b. Example suppose the value of a = 5 and after `b = ++a` will makes a = 6(5+1) and b = 6.

- Post Increment : If we make only a++ will increase the value of a by one. If we use `b = a++` , here first set the value of b with a then increase the value of a by one. Example suppose the value of a = 5 and after `b = a++` will make b = 5 and a = 6(5+1).

## Decrement :
Decrement operator -- decrease the value of a integer by one. Similar Increment operator Decrement operation are also two types. Pre Decrement(--a) and Post Decrement (a--) operation.

-  Pre Decrement  : If we make only --a will decrease the value of a by one. Suppose `b = --a` , here first decrese the value of a by 1 and then set value of b by the decresead value of b. Example suppose the value of a = 5 and after `b = --a` will makes a = 4(5-1) and b = 4.

- Post Decrement  : If we make only a-- will decrease the value of a by one. If we use `b = a--` , here first set the value of b with a then decrease the value of a by one. Example suppose the value of a = 5 and after `b = a--` will make b = 5 and a = 4(5-1).

We can write `a = a + 5` with `b += 5` similarly `a = a - 5` with `b -= 5`

[Download Code](./code/arithmatic_operation.c)



```c
#include<stdio.h>

int main(){
	
	int a = 5;
	int b = 6;
	int c = 2;
	int res;
	float res1;

	//printing variables
	printf("a = %d, b= %d, c=%d\n", a,b,c);	 //Output a=5, b=6, c=2
	
	//Addition
	res = a + b;
	printf("Addition : a + b = %d\n", res); //Output 11

	//Subtraction
	res = a - b;
	printf("Subtraction : a - b = %d\n", res); //Output -1

	//Multiplication
	res = a * b;
	printf("Multiplication : a * b = %d\n", res); //Output 30

	//Division
	res1 = (float) a / b; //If we do not cast (float) in here it will show 0.00000 instead of  0.83333
	printf("Division : a / b = %.5f\n", res1); //Output 0.83333

	//Get Remainder
	res = a % b;
	printf("Remainder : res = %d\n", res); //Output 5


	//Setting previous value
	a = 5;
	b = 6;
	c = 2;
	//printing variables
	printf("a = %d, b= %d, c=%d\n", a,b,c);	 //Output a=5, b=6, c=2

	printf("Increment\n");

	//Post Increment 

	a++; //Increasing the value of a by one
	printf("a = %d\n", a); //Output 6

	//In Post Increment increase the value of a by one after set its value with c
	c = a++;
	printf("c = %d, a = %d\n", c, a); //Here c = 6(previous value of  a)
	
	//Pre Increment
	
	++b; //Increasing the value of a by one
	printf("b = %d\n", b); //Output 7

	//In Pre Increment process increase the value of b by one before set its value to b
	c = ++b;
	printf("c = %d, b = %d\n", c, b); //Here c = 8(Increased 1 value of b)


	a += 5;
	printf("a = %d\n", a); // Output a = 12 as previous value of a waas 5

	a =+ 10;
	printf("a = %d\n", a); //set the value of a = +10 without increasing 10 from its previous value


	printf("Decrement\n");
	//Post Decrement

	//Setting previous value
	a = 5;
	b = 6;
	c = 2;
	//printing variables
	printf("a = %d, b= %d, c=%d\n", a,b,c);	 //Output a=5, b=6, c=2

	a--; //Decresing the value of a by one
	printf("a = %d\n", a); //Output 4

	//In Post Decrement decrese the value of a by one after set its value with c
	c = a--;
	printf("c = %d, a = %d\n", c, a); //Here c = 4(previous value of  a)
	
	//Pre Increment

	--b; //Decresing the value of a by one
	printf("b = %d\n", b); //Output 5

	//In Pre Decrement process decrese the value of b by one before set its value to b
	c = --b;
	printf("c = %d, b = %d\n", c, b); //Here c = 4(Decresing 1 value of b)


	a -= 5;
	printf("a = %d\n", a); // Output a = -2 as previous value of a waas 5

	a =- 10;
	printf("a = %d\n", a); //set the value of a = -10 without increasing 10 from its previous value



	return 0;


}

```

Output :

```bash
a = 5, b= 6, c=2
Addition : a + b = 11
Subtraction : a - b = -1
Multiplication : a * b = 30
Division : a / b = 0.83333
Remainder : res = 5
a = 5, b= 6, c=2
Increment
a = 6
c = 6, a = 7
b = 7
c = 8, b = 8
a = 12
a = 10
Decrement
a = 5, b= 6, c=2
a = 4
c = 4, a = 3
b = 5
c = 4, b = 4
a = -2
a = -10
```


<div style="text-align: center;">
    <button type="button" onclick="window.location.href='https://baponkar.github.io/Learning-C//Numeric-Constants-and-Variables/Numeric-Constants-and-Variables';" style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 5px; cursor: pointer;">
       Prev
    </button>
     <button type="button" onclick="window.location.href='https://baponkar.github.io/Learning-C/Input-and-Output/Input-and-Output';" style="background-color: #4CAF50; color: white; padding: 10px 20px; border: none; border-radius: 5px; cursor: pointer;">
       Next
    </button>
</div>