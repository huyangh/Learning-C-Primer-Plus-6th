//
// Created by huyan on 2020/5/15.
//
//使用嵌套循环

#include <stdio.h>
#define ROWS 6
#define CHARS 10

void example17(){
    int row;
    char ch;
    for (row = 0; row < ROWS; row++){

        for (ch = ('A' + row); ch < ('A' + CHARS); ch++){
            printf("%c", ch);
        }

        printf("\n");
    }
}
