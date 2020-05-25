//
// Created by  huyangh on 2020/5/15.
//
//使用嵌套循环，按下面的格式打印字母：
//F
//FE
//FED
//FEDC
//FEDCB
//FEDCBA

#include <stdio.h>
void practice3(){
    char letter = 'F';
    for (int i = 0; i < 6; i ++){
        for (int j = 0; j <= i; j ++){
            printf("%c", (letter - j));
        }

        printf("\n");
    }
}
