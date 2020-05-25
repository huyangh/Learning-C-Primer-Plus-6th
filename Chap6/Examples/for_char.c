//
// Created by  huyangh on 2020/5/15.
//
// for循环中用字符代替数字计数：

#include <stdio.h>
void for_char(){
    char ch;
    for (ch = 'a'; ch <= 'z'; ch ++){
        printf("The ASCII value for %c is %d.\n", ch, ch);
    }
}
