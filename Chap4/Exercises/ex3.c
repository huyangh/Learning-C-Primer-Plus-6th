//
// Created by  huyangh on 2020/5/15.
//
//3.编写一个程序，读取一个浮点数，首先以小数点记数法打印，然后以指数记数法打印。
// 用下面的格式进行输出（系统不同，指数记数法显示的位数可能不同）：
//a.输入21.3或2.1e+001；
//b.输入+21.290或2.129E+001；
#include <stdio.h>
void ex3(void){
    float f1;

    printf("Please input a float number: \n");
    scanf("%f", &f1);
    printf("%.3f\n", f1);
    printf("%.3e", f1);

}