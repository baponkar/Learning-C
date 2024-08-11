/*
 * Description : This Programme will explain the function of Pointer Data type.
 *
 * Developer : Mr. Bapon Kar
 * Developing Date : 06/08/2024
 * Reference : Rajaraman, V. , Computer Programming in C, PHI Learning Private Limited
 * Last Update : 06/08/2024 
 */

#include<stdio.h>


int main(){

	char c = 'm';
	printf("The address of m is %p and its value is %c\n", &c, c);
	//The address of m is 0x7ffecf06e1ff and its value is m

	//-----------------------------------------------------------------------------------
	
	int a = 32; //The compiler automatically assign a free address for integer variable a
		    //and set its value 32
	printf("The address of integer variable a is %p and its value is %d\n", &a, a);
	//The address of integer variable a is 0x7ffecf06e200 and its value is 32
	//The address is changing in everytime
	
	int b = &a;
	printf("The address of integer variable b is %p and its value is %p\n", &b, b);
	//The address of integer variable b is 0x7ffecf06e204 and its value is 0xcf06e200

	
	// int a = 32 ==> int *x ==> int y
	// a = 32
	// *x = &a assigning pointer value of address a
	// y = *x assigining the value of a into y 
	
	
	//Introducing Pointer Data Type
	int *x;
	
	x = &a;	//Initially The compiler assign a free address to x
		//Here The content of x is set to 32 which is content of a. But there
		//is no connection x to a.
		//During integer variable x initialization start to set equal to content of b
		// but b content is address of a so then try to find the content of a
		//The content of a is a pure integer value 32
		//So ultimately set the value of x is 32. 
	
	printf("The address of x is %p and the value is %p\n", &x, x);
	
	int y = *x;
	printf("The address of y is %p and the value is %d\n", &y, y);

	//------------------------------------------------------------------------------------

	// Pointers And Arrays
	int arr[5] = {8, 6, 5, 9, 11};
	
	printf("The address of first item of the array is %p and the content is %d\n", &arr[0],arr[0]);
	//The address of first item of the array is 0x7ffe179fb2e0 and the content is 8

	int *temp = arr;
	printf("The address of temp is %p and content is %d\n", &temp, temp); 
	//The address of temp is 0x7fffd225b2a8 and content is -769281360b	


	
	*temp = &arr[0];
	printf("The address of temp is %p and content is %d\n", &temp, temp);
	//The address of temp is 0x7fffd225b2a8 and content is -769281360b

	printf("The Second item %d\n", temp+1);

	int temp1 = *temp;
	printf("The value of temp1 is %d\n", temp1);
}	

