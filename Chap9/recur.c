//
// Created by huyan on 2020/5/15.
//
// 递归的演示

#include <stdio.h>
void up_and_down(int n){
    printf("Level　%d:　n　location　%p\n", n, &n);
    if(n < 4){
        up_and_down(n + 1);
    }
    printf("LEVEL　%d:　n　location　%p\n", n, &n);
}
