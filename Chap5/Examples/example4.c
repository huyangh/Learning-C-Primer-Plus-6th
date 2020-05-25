//
// Created by  huyangh on 2020/5/24.
// 计算1～20的平方
#include <stdio.h>
void example4() {
    int  num  =  1;
    while  (num  <  21)
    {
        printf("%4d %6d\n", num, num * num);
        num  =  num  +  1;
    }

}