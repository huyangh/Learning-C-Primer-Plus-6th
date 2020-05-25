//
// Created by  huyangh on 2020/5/24.
//修改程序addemup.c（example13），你可以认为addemup.c是计算20天里赚多少钱的程序
// （假设第1天赚$1、第2天赚$2、第3天赚$3，以此类推）。修改程序，使其可以与用户交互，
// 根据用户输入的数进行计算（即，用读入的一个变量来代替20）。
#include <stdio.h>
void practice5(){
    int count, sum, days;
    count = 0;
    sum = 0;
    printf("Please input the days you work:\n");
    scanf("%d", &days);
    while (count++ < days)
        sum = sum + count;
    printf("The total money you earn in %d days is $%d.\n", days, sum);
}
