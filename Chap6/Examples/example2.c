//
// Created by  huyangh on 2020/5/25.
//何时退出循环
#include <stdio.h>
void example2(){
    int n = 5;
    while (n < 7)           // 第7行
    {
        printf("n = %d\n", n);
        n++;              // 第10行
        printf("Now n = %d\n", n); // 第11行
    }
    printf("The loop has finished.\n");
}

