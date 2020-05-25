//
// Created by  huyangh on 2020/5/25.
//第1个表达式不一定是给变量赋初值，也可以使用printf()
//在执行循环的其他部分之前，只对第1个表达式求值一次或执行一次。
#include <stdio.h>
void for_show(){
    int num = 0;
    for (printf("Keep entering numbers!\n"); num != 6;)
        scanf("%d", &num);
    printf("That's the one I want!\n");
}

