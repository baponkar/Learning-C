/*This Program will determine Circumference and area of a circle by taking input as radius*/


#include<stdio.h>

#define PI 3.1415927

float rad;

void main(){
    printf("Enter radis(float) of a circle :");
    scanf("%f", &rad);

    float circum = 2 * PI * rad;
    float area = PI * rad * rad;

    printf("Circumference = %.2f and area = %.2f",circum, area);
}