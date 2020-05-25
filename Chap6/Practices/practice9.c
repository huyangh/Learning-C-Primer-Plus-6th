//
// Created by  huyanghgh on 2020/5/25.
//修改练习8，使用一个函数返回计算的结果。
#include <stdio.h>
double calc(double n1, double n2);

void practice9(){
    double n1, n2;
    printf("Please input two float numbers: \n");

    while(scanf("%lf %lf", &n1, &n2)){
        printf("The result is: %.8lf\n", calc(n1, n2));
        printf("Please input another two float numbers: \n");
    }
}

double calc(double n1, double n2){
    return (n1 - n2) / (n1 * n2);
}


