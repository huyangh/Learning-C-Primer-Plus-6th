//
// Created by  huyangh on 2020/5/24.
//使用sizeof运算符
//使用C99新增的%zd转换说明 -- 如果编译器不支持%zd，请将其改成%u或%lu
#include <stdio.h>
void example8(){
    int n = 0;
    size_t intsize;
    intsize = sizeof (int);
    printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n",n, sizeof n, intsize);
}