//
// Created by  huyangh on 2020/5/15.
//
//编写一个程序把一个单词读入一个字符数组中，然后倒序打印这个单
//词。提示：strlen()函数（第4章介绍过）可用于计算数组最后一个字符的下标。

#include <stdio.h>
#include <string.h>

void practice7(){
    char str[20];
    printf("Please input a word: \n");
    scanf("%s", str);
    int last = strlen(str) - 1;

    for (int i = last; i >= 0; i--){
        printf("%c", str[i]);
    }
}