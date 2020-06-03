//
// Created by huyangh on 2020/5/29.
//cypher1.c -- 更改输入，空格不变:
//如果字符是空白，原样打印；否则，打印原字符在ASCII序列中的下一个字符
#include <stdio.h>
#define SPACE ' ' // SPACE表示单引号-空格-单引号
void example2(void) {
    char ch;
    while ((ch = getchar()) != '\n') // 当一行未结束时
    {
        if (ch == SPACE) // 留下空格
            putchar(ch); // 该字符不变
        else
            putchar(ch + 1); // 改变其他字符
    }
    putchar(ch);    //显示换行符
}

