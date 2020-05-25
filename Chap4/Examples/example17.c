//
// Created by  huyangh on 2020/5/15.
//
// 跳过输入中的前两个整数

#include <stdio.h>
void example17(void){
    int n;
    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n);
    printf("The last integer was %d\n", n);

}
