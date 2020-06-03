//
// Created by huyangh on 2020/5/29.
//chcount.c　-- 使用逻辑与运算符
#include <stdio.h>
#define PERIOD '.'
void example6(){
    char ch;
    int charcount = 0;
    while ((ch = getchar()) != PERIOD)
    {
        if (ch != '"' && ch != '\'')
            charcount++;
    }
    printf("There are %d non-quote characters.\n", charcount);
}

