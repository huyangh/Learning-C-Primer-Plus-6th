//
// Created by huyan on 2020/5/15.
//
// 字段宽度

#include <stdio.h>
#define PAGES 959546

void example7(void){
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%-10d*\n", PAGES);
}
