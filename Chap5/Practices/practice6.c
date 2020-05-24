//
// Created by huyan on 2020/5/24.
//修改编程练习5的程序，使其能计算整数的平方和（可以认为第1天赚
//$1、第2天赚$4、第3天赚$9，以此类推，这看起来很不错）。C没有平方函
//数，但是可以用n * n来表示n的平方。
#include <stdio.h>
void practice6(){
    int count, sum, days;
    count = 0;
    sum = 0;
    printf("Please input the days you work:\n");
    scanf("%d", &days);
    while (count++ < days)
        sum = sum + count * count;
    printf("The total money you earn in %d days is $%d.\n", days, sum);
}
