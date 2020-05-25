//
// Created by  huyangh on 2020/5/25.
//rows2.c -- 依赖外部循环的嵌套循环
#include <stdio.h>
void example18(){
    const int ROWS = 6;
    const int CHARS = 6;
    int row;
    char ch;
    for (row = 0; row < ROWS; row++)
    {
        for (ch = ('A' + row); ch < ('A' + CHARS); ch++)
        printf("%c", ch);
        printf("\n");
    }
}

