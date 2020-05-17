//
// Created by huyan on 2020/5/15.
//
//编写一个程序，要求用户输入两个浮点数，并打印两数之差除以两数
//乘积的结果。在用户输入非数字之前，程序应循环处理用户输入的每对值

#include <stdio.h>
void practice8(){
    float n1, n2;
    printf("Please input two float numbers: \n");

    while(scanf("%f %f", &n1, &n2)){
        double result = (n1 - n2) / (n1 * n2);
        printf("The result is: %.8lf\n", result);
        printf("Please input another two float numbers: \n");
    }

}