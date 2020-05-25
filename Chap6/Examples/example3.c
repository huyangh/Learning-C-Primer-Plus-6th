//
// Created by  huyangh on 2020/5/25.
/* while1.c -- 注意花括号的使用 */
/* 糟糕的代码创建了一个无限循环 */
#include <stdio.h>
void example3(){
    int n = 0;
    while (n < 3)
    printf("n is %d\n", n);
    n++;                               //位于循环外
    printf("That's all this program does\n");
}
