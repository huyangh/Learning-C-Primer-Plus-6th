//
// Created by  huyangh on 2020/5/25.
//truth.c -- 哪些值为真
#include <stdio.h>
void example7(){
    int n = 3;
    while (n)
            printf("%2d is true\n", n--);
    printf("%2d is false\n", n);
    n = -3;
    while (n)
            printf("%2d is true\n", n++);
    printf("%2d is false\n", n);
}

