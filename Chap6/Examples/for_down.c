//
// Created by  huyangh on 2020/5/25.
//使用递减运算符来递减计数器
#include <stdio.h>
void for_down(){
    int secs;
    for (secs = 5; secs > 0; secs--)
        printf("%d seconds!\n", secs);
    printf("We have ignition!\n");
}

