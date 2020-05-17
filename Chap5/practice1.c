//
// Created by huyan on 2020/5/15.
//
// 编写一个程序，把用分钟表示的时间转换成用小时和分钟表示的时
//间。使用#define或const创建一个表示60的符号常量或const变量。通过while
//循环让用户重复输入值，直到用户输入小于或等于0的值才停止循环。

#include <stdio.h>
#define RATE 60

void practice1(){
    int minutes = 1;
    int hour, min;
    while (minutes > 0){
        printf("Please input how many minutes you want:\n");
        scanf("%d", &minutes);
        hour = minutes / RATE;
        min = minutes % RATE;
        printf("The conversion result is %d hour(s) and %d minutes.\n", hour, min);
    }
}
