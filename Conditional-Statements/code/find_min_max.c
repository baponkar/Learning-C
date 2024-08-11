#include<stdio.h>

int main(){
    int max = 0;
    int min = 0;
    int data[10] = {35, 78, 45, 203, 2, 11, 56, 13, 91, 10}; //assigning the giving numbers into an integer array

    for(int i=0; i <10; i++){
        if(max < data[i]){
            max = data[i]; //get biggest number
        }
    }

    //initialise the min with first item 
    min = data[0];

    for(int i=0; i <10; i++){
        if(min > data[i]){
            min = data[i]; //get biggest number
        }
    }

    printf("Min = %d, Max = %d", min, max); //Output: Min = 2, Max = 203

    return 0;
}