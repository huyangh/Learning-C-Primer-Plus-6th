//
// Created by  huyangh on 2020/5/24.
//运算符优先级测试
#include <stdio.h>
void example7(){
    int top, score;
    top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
    printf("top = %d, score = %d\n", top, score);
}