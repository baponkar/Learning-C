/*This program will check either a number is prime or not*/

#include<stdio.h>
#include<stdbool.h>

long no;

bool flag = true;


void main(){
    printf("Please Enter the number:");
    scanf("%ld",&no);

    for(int long i=2; i<no-1; i++){
        if(no % i == 0){
            flag = false;
            printf("Divisible by %ld \n",i);
            break;
        }
    }

    if(flag){
        printf("%ld is a Prime number.\n", no);
    }else{
        printf("%ld is not a prime number!\n",no);
    }
}