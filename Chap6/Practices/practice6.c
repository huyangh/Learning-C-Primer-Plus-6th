//
// Created by  huyangh on 2020/5/15.
//
// 编写一个程序打印一个表格，每一行打印一个整数、该数的平方、该
//数的立方。要求用户输入表格的上下限。使用一个for循环。

#include <stdio.h>
void practice6(){
    int min, max;
    printf("Please input the limits of the table(min first): \n");
    scanf("%d %d", &min, &max);

    printf("Number  Squared  Cubed\n");
    for (int i = min; i <= max; i++ ){
        printf("%6d  %7d  %5d\n", i, i * i, i * i * i);
    }
}