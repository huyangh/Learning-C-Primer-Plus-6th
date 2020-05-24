//
// Created by huyan on 2020/5/14.
//
//使用转义序列
#include <stdio.h>

void program3_10(void){
    float salary;
    printf("\aEnter your desired monthly salary:");
    printf("$____\b\b\b\b");
    scanf("%f", &salary);
    printf("\n\t$%.2f a month is $%.2f a year.", salary, salary*12.0);
    printf("\rGee!\n");
}
