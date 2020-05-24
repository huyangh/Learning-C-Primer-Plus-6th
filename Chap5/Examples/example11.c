//
// Created by huyan on 2020/5/24.
//前缀和后缀
#include <stdio.h>
void example11(){
    int a = 1, b = 1;
    int a_post, pre_b;
    a_post = a++; // 后缀递增
    pre_b = ++b;  // 前缀递增
    printf("a  a_post  b  pre_b \n");
    printf("%1d %5d %5d %5d\n", a, a_post, b, pre_b);
}
