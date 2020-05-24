//
// Created by huyan on 2020/5/24.
// 把鞋码转换为英寸（不用循环）
#include <stdio.h>
#define ADJUST 7.31
void example1(){
    const double SCALE = 0.333;// const变量
    double shoe, foot;
    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;
    printf("Shoe size (men's)    foot  length\n");
    printf("%10.1f %15.2f inches\n", shoe, foot);
}

