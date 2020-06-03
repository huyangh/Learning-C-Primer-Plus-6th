//
// Created by huyangh on 2020/6/2.
//编写一个程序读取输入，读到#字符停止，然后报告读取的空格数、
//换行符数和所有其他字符的数量。
#include <stdio.h>
#include <ctype.h>
void practice1(){
    char ch;
    int n_ch, n_space, n_enter;
    n_ch = n_space = n_enter = 0;
    puts("Please input some text, # to end:\n");
    while ((ch = getchar()) != '#'){
        n_ch++;
        if (ch == '\n')
            n_enter++;
        else if (isspace(ch))
            n_space++;
    }
    printf("The text has %d spaces, %d line breaks and %d other characters.\n ",
            n_space, n_enter, n_ch - n_space - n_enter);
}
