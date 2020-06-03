//
// Created by huyangh on 2020/6/3.
//编写程序读取输入，读到#停止，报告ei出现的次数。
//注意，该程序要记录前一个字符和当前字符。用“Receive your eieio award”
//这样的输入来测试。
#include <stdio.h>
void practice6(){
    char ch, ch_prev, ch_curr;
    int count = 0;
    puts("Please input a sentence, end with #:\n");
    while ((ch = getchar()) != '#'){
        ch_curr = ch;
        if ((ch_prev == 'e') && (ch_curr == 'i'))
            count++;
        else
            ch_prev = ch_curr;
    }
    printf("The string \"ei\" appeared for %d times.\n", count);
}
