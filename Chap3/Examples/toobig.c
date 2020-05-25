//
// Created by  huyangh on 2020/5/14.
// 超出系统允许的最大int值
#include <stdio.h>
void toobig(void){
    int i = 2147483647;
    unsigned int j = 4294967295;
    printf("%d %d %d\n", i, i + 1, i + 2);
    printf("%u %u %u\n", j, j + 1, j + 2);
}
