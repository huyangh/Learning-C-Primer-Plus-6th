//
// Created by huyangh on 2020/6/2.
//编写一个程序读取输入，读到#字符停止。程序要打印每个输入的字
//符以及对应的ASCII码（十进制）。一行打印8个字符。建议:使用字符计数
//和求模运算符（%）在每8个循环周期时打印一个换行符。
#include <stdio.h>
void practice2(){
    char ch;
    int n_ch = 0;
    puts("Please input some text, # to end:\n");
    while ((ch = getchar()) != '#'){
        n_ch++;
        printf("%c(%d), ", ch, ch);
        if (n_ch % 8 == 0)
            puts("\n");
    }
}
