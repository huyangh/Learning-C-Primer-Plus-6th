//
// Created by huyan on 2020/5/14.
//
#include <stdio.h>
#define PI 3.14159

void example4(void){
    float area, circum, radius;
    printf("What is the radius of your pizza?\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = 2.0 * PI * radius;
    printf("Your basic pizza parameters are as follows:\n");
    printf("circumference = %.2f, area = %.2f\n", circum, area);
}
