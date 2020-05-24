//
// Created by huyan on 2020/5/14.
// 以十进制、八进制、十六进制打印十进制数100
#include <stdio.h>

void program3_3(void){
    int x = 100;
    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);

}