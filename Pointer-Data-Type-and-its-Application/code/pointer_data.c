/*
* Details : This Program explain the pointer data type.
            The integer 'a' hold the integer value 14.
            The pointer 'ptr' is holding the address of a.
            The pointer 'ptr_of_ptr' is holding the address of 'ptr'.
            The integer z is equal to *ptr but it is first try to
            store the integer value of *ptr but it is not holding
            integer value but it is holding address of b so z store 
            the value of a so its value will be set to 14.
            Now y is a integer so it will store the integer value of 
            *ptr_of_ptr but *ptr_of_ptr is holding the address
            of pointer *ptr which is also a pointer and it have 
            address of a so y stores the integer equvalent of address
            of a.
* Build Date : 07/08/2024
* Developer : Bapon Kar
*/

#include<stdio.h>


int main(){

    int a = 14; //This process assign a address for integer a and store a integer value 14

    printf("The address of a is %p and value is %d\n", &a, a); //& represent address opeartor

    //Creating a pointer
    int * ptr =(int *) &a; //The pointer ptr hold the location of integer a
    printf("The address of ptr is %p and the value of ptr is %p\n", &ptr, ptr); //

    //Creating a pointer of a pointer
    int *ptr_of_ptr = (int *) &ptr;
    printf("The address of ptr_of_ptr is %p and its value is %p\n", &ptr_of_ptr, ptr_of_ptr);

    //Creating another integer z with ptr
    int z = (int) *ptr;
    printf("The address of z is %p and the value is %d\n", &z, z);

    //Creating another integer y with ptr_of_ptr
    int y = (int) * ptr_of_ptr;
    printf("The address of y is %p and the value is %p\n", &y, y);


    return 0;
}
