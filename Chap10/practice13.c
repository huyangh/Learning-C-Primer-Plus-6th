//
// Created by  huyangh on 2020/5/16.
//
//编写一个程序，提示用户输入3组数，每组数包含5个double类型的数
//（假设用户都正确地响应，不会输入非数值数据）。该程序应完成下列任务
//a.把用户输入的数据储存在3×5的数组中
//b.计算每组（5个）数据的平均值
//c.计算所有数据的平均值
//d.找出这15个数据中的最大值
//e.打印结果
// 每个任务都要用单独的函数来完成（使用传统C处理数组的方式）。完成任务b，
// 要编写一个计算并返回一维数组平均值的函数，利用循环调用该函数3次。
// 对于处理其他任务的函数，应该把整个数组作为参数，完成任务c和d的函数应把结果返回主调函数。
#include <stdio.h>
double subaver(double a[3][5], int line);
double aver(double a[3][5]);
double maxnum(double a[3][5]);

void practice13(){
    double nums[3][5];
    printf("Please input 3 groups of double numbers, 5 in each group:\n");

    for (int i = 0; i < 3; i++) {
        scanf("%lf %lf %lf %lf %lf", &nums[i][0], &nums[i][1],
                &nums[i][2], &nums[i][3], &nums[i][4]);
    }

    for (int j = 0; j < 3; j++) {
        printf("%lf\n", subaver(nums, j));
    }

    printf("%lf", aver(nums));
    printf("%lf", maxnum(nums));

}

double subaver(double a[3][5], int line){
    double subsum = 0;
    for (int i = 0; i < 5; i++) {
        subsum += a[line][i];
    }
    return subsum / 5;
}

double aver(double a[3][5]){
    double sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            sum += a[i][j];
        }
    }
    return sum / 15;
}

double maxnum(double a[3][5]){
    double b[15];
    int max = 0;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            b[(5 * i + j)] = a[i][j];
        }
    }
    for (int k = 0; k < 15; k++) {
        if (b[k] > b[max]){
            max = k;
        }
    }
    return b[max];
}