#include<stdio.h>
#include<math.h>

/*
In this programme I am not using <stdbool.h> to create bool variable but created this type variable
by typedef. This programme check a number either prime or not.
*/

#define TRUE 1
#define FALSE 0
typedef int bool ;

bool isPrime = FALSE;

bool noCheck(unsigned long long no){
     for(unsigned long long i=2; i<= sqrt(no); i++){
        if(no % i == 0){
            return FALSE;
        }
    }
    return TRUE;
}

int main(){
    unsigned long long no ;
    scanf("%llu", &no);
    bool result = noCheck(no);
    if(result){
        printf("Yes! It is a Prime Number.");
    }else{
        printf("No! It is not a Prime Number.");
    }
    return 0;
}