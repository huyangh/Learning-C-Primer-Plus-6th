//
// Created by huyangh on 2020/6/3.
//使用switch重写练习4。
#include <stdio.h>
void practice5() {
    char ch;
    int count = 0;

    puts("Please input some text, # to end:");
    while ((ch = getchar()) != '#') {
        switch (ch) {
            case '.' : {
                putchar('!');
                count++;
                continue;
            }
            case '!' : {
                putchar('!');
                putchar('!');
                count++;
                continue;
            }
            default : putchar(ch);
        }

    }
    printf("\n%d replace actions in total.\n", count);
}

