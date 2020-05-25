//
// Created by  huyangh on 2020/5/15.
//
//编写一个程序，提示用户输入天数，然后将其转换成周数和天数。例如，用户输入18，则转换成2周4天。
// 以下面的格式显示结果：18 days are 2 weeks, 4 days.
//通过while循环让用户重复输入天数，当用户输入一个非正值时（如0或-20），循环结束。
#include <stdio.h>
#define RATE 7

void practice3(){
    int days = 1;
    int week, day;
    while (days > 0){
        printf("Please input how many days you want:\n");
        scanf("%d", &days);
        week = days / RATE;
        day = days % RATE;
        printf("%d days are %d week(s) and %d day(s).\n", days, week, day);
    }
}