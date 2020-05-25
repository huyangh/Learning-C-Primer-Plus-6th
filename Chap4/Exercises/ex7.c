//
// Created by  huyangh on 2020/5/24.
//编写一个程序，将一个double类型的变量设置为1.0/3.0，一个float类型的变量设置为1.0/3.0。
// 分别显示两次计算的结果各3次：一次显示小数点后面6位数字；一次显示小数点后面12位数字；
// 一次显示小数点后面16位数字。程序中要包含float.h头文件，并显示FLT_DIG和DBL_DIG的值。
// 1.0/3.0的值与这些值一致吗？
#include <stdio.h>
#include <float.h>
void ex7(){
    double double_num = 1.0 / 3.0;
    float float_num = 1.0 / 3.0;
    printf("The digits of float and double: %d, %d\n", FLT_DIG, DBL_DIG);
    printf("For float number: %.6f %.12f %.16f\n", float_num, float_num, float_num);
    printf("For double number: %.6f %.12f %.16f\n", double_num, double_num, double_num);

}
