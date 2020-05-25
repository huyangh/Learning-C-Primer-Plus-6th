//
// Created by  huyangh on 2020/5/15.
//
//使用嵌套循环，按下面的格式打印字母：
//A
//BC
//DEF
//GHIJ
//KLMNO
//PQRSTU

#include <stdio.h>
void practice4(){
    char letter = 'A';
    for (int i = 0; i < 6; i++){
        for (int j = 0; j <= i; j++){
            printf("%c", letter++);
        }
        printf("\n");
    }
}
