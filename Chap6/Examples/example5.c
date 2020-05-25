//
// Created by  huyangh on 2020/5/15.
//
// 浮点数比较- fabs()

#include <stdio.h>
#include <math.h>

void example5(){
    const double ANSWER = 3.14159;
    double response;
    printf("What is the value of pi?\n");
    scanf("%lf", &response);

    while (fabs(response - ANSWER) > 0.0001){
        printf("Try again!\n");
        scanf("%lf", &response);
    }

    printf("Close enough!\n");
}