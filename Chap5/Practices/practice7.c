//
// Created by huyan on 2020/5/24.
//编写一个程序，提示用户输入一个double类型的数，并打印该数的立
//方值。自己设计一个函数计算并打印立方值。main()函数要把用户输入的值
//传递给该函数。
#include <stdio.h>
double cubic(double n);

void practice7(){
    double num;
    printf("Please input a double number:\n");
    scanf("%lf", &num);
    printf("%lf", cubic(num));
}

double cubic(double n){
    return n * n * n;
}

