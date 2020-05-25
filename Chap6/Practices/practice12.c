//
// Created by  huyangh on 2020/5/15.
//
//考虑下面两个无限序列：
//1.0　+　1.0/2.0　+　1.0/3.0　+　1.0/4.0　+　...
//1.0　-　1.0/2.0　+　1.0/3.0　-　1.0/4.0　+　...
//编写一个程序计算这两个无限序列的总和，直到到达某次数。提示：奇数个-1 相乘得-1，
// 偶数个-1相乘得1。让用户交互地输入指定的次数，当用户输入0或负值时结束输入。
// 查看运行100项、1000项、10000项后的总和，是否发现每个序列都收敛于某值？
#include <stdio.h>
#include <math.h>
void practice12(){
    double f1 = 1.0;
    double n1, n2;
    double sum1 = 0, sum2 = 0;
    long long num;
    printf("Please input the number: \n");
    scanf("%lld", &num);
    do {
        sum1 = sum2 = 0;
        for (long long i = 1; i <= num; i++) {
            n1 = f1 / i;
            n2 = (f1 / i) * pow(-1, i + 1);
            sum1 += n1;
            sum2 += n2;
        }
        printf("The value of sum1 is: %lf.\n", sum1);
        printf("The value of sum2 is: %lf.\n", sum2);
        printf("Please input another number:\n");
    }while ((scanf("%lld", &num) == 1) && (num > 0));

    printf("Done!\n");


}