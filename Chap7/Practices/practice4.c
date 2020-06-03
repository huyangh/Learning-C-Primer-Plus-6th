//
// Created by huyangh on 2020/6/3.
//使用if else语句编写一个程序读取输入，读到#停止。用感叹号替换句
//号，用两个感叹号替换原来的感叹号，最后报告进行了多少次替换。
#include <stdio.h>
void practice4() {
    char ch;
    int count = 0;

    puts("Please input some text, # to end:\n");
    while ((ch = getchar()) != '#') {
        if (ch == '.') {
            putchar('!');
            count++;
        }
        else if (ch == '!') {
            putchar('!');
            putchar('!');
            count++;
        }
        else
            putchar(ch);
    }
    printf("\n%d replace actions in total.\n", count);
}