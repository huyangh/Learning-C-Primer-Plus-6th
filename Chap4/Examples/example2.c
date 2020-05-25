//
// Created by  huyangh on 2020/5/14.
//
// 使用不同类型的字符串
#include <stdio.h>
#define PRAISE "You are an extraordinary being."

void example2(void){
    char name[40];
    printf("What's your name?");
    scanf("%s", name);
    printf("Hello, %s.%s\n", name, PRAISE);

}
