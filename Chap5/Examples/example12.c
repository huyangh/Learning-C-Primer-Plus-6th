//
// Created by  huyangh on 2020/5/24.
//递减运算符
#include <stdio.h>
#define MAX 100
void example12(){
    int count = MAX + 1;
    while (--count > 0) {
        printf("%d bottles of spring water on the wall, "
               "%d bottles of spring water!\n", count, count);
        printf("Take one down and pass it around,\n");
        printf("%d bottles of spring water!\n\n", count - 1);
    }
}

