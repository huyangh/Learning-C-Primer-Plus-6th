//
// Created by  huyangh on 2020/5/25.
//第3个表达式可以使用任意合法的表达式
#include <stdio.h>
void for_wild(){
    int x;
    int y = 55;
    for (x = 1; y <= 75; y = (++x * 5) + 50)
        printf("%10d %10d\n", x, y);
}

