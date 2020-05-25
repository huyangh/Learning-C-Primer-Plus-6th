//
// Created by  huyangh on 2020/5/24.
//几种常见的语句
#include <stdio.h>
void example13(){       /* 计算前20个整数的和　 */
    int count, sum;     /* 声明[1]       */
    count = 0;         /* 表达式语句      */
    sum = 0;          /* 表达式语句      */
    while (count++ < 20)    /* 迭代语句      */
    sum = sum + count;
        printf("sum = %d\n", sum); /* 表达式语句[2]     */
}

