//
// Created by huyan on 2020/5/15.
//
// 浮点型修饰符的组合

#include <stdio.h>
void example8(void){
    const double RENT = 38.99;
    printf("*%f*\n", RENT);
    printf("*%e*\n", RENT);
    printf("*%4.2f*\n", RENT);
    printf("*%3.1f*\n", RENT);
    printf("*%10.3f*\n", RENT);
    printf("*%10.3E*\n", RENT);
    printf("*%+4.2f*\n", RENT);
    printf("*%010.2f*\n", RENT);
}
