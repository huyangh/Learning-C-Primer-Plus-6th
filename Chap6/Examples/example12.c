//
// Created by  huyangh on 2020/5/25.
//
/* for_cube.c -- 使用for循环创建一个立方表 */
#include <stdio.h>
void example12(){
    int num;
    printf("   n  n cubed\n");
    for (num = 1; num <= 6; num++)
    printf("%5d %5d\n", num, num*num*num);
}
