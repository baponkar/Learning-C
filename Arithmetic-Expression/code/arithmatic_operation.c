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


	//Asigement
	//Setting previous value
	a = 5;
	b = 6;
	c = 2;
	res1 = 0;
	//printing variables
	printf("a = %d, b= %d, c=%d\n", a,b,c);	 //Output a=5, b=6, c=2

	a += 5; //short form of a = a + 5
	printf("a = %d\n", a); //Output a = 10

	a -= 5; //short form of a = a - 5
	printf("a = %d\n", a); //Output a = 5

	a *= 5; //short form of a = a * 5
	printf("a = %d\n", a); //Output a = 25

	a /= 5; //short form of a = a / 5
	printf("a = %d\n", a); //Output a = 5

	a %= 5; //short form of a = a % 5
	printf("a = %d\n", a); // Output a = 0



	return 0;


}
