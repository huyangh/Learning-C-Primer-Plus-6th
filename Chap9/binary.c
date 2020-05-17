//
// Created by huyan on 2020/5/15.
//
// 以二进制打印整数（递归） -- 利用倒序特性

#include <stdio.h>
void to_binary(unsigned long n){
    int r = n % 2;
    if (n >= 2){
        to_binary(n / 2);
    }
    putchar(r == 0 ? '0' : '1');
    return;
}
