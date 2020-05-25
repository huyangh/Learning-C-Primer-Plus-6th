//
// Created by  huyangh on 2020/5/24.
//计算多个不同鞋码对应的脚长
#include <stdio.h>
#define ADJUST 7.31
void example2(){
    const double SCALE = 0.333;// const变量
    double shoe, foot;
    printf("Shoe size (men's)    foot  length\n");
    shoe = 3.0;
    while (shoe < 18.5)                 /* while循环开始 */
    {                                   /* 块开始　*/
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f %15.2f inches\n", shoe, foot);
        shoe = shoe + 1.0;
    }                                   /* 块结束　　　 */
    printf("If the shoe fits, wear it.\n");
}
