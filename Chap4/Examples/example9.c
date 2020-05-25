//
// Created by  huyangh on 2020/5/15.
//
// 演示一些格式标记

#include <stdio.h>
void example9(void){
    printf("%x %X %#x\n", 31, 31, 31);  //打印16进制
    printf("**%d **% d**%d**\n", 42, 42, -42);  //演示前导空格
    printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);   //演示0标记
}
