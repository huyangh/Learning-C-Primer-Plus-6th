//
// Created by huyangh on 2020/6/2.
//编写一个程序，读取整数直到用户输入 0。输入结束后，程序应报告
//用户输入的偶数（不包括 0）个数、这些偶数的平均值、输入的奇数个数及
//其奇数的平均值。
#include <stdio.h>
void practice3(){
    int num, sum_odd, sum_even;
    sum_odd = sum_even = 0;
    int count_odd, count_even;
    count_even = count_odd = 0;

    puts("Please input some numbers, confirm with enter, end with 0:");
    while (scanf("%d", &num)){
        if (num == 0)
            break;
        if (num % 2 == 0) {
            count_even++;
            sum_even += num;
        }
        else {
            count_odd++;
            sum_odd += num;
        }
    }

    printf("The input has %d odd numbers with an average of %.1f.\n", count_odd, (double)sum_odd / count_odd);
    printf("The input has %d even numbers with an average of %.1f.\n", count_even, (double)sum_even / count_even);

}

