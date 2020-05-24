//
// Created by huyan on 2020/5/15.
//
// 使用转换说明

#include <stdio.h>
#define PI 3.141593

void example6(void){
    int number = 7;
    float pies = 12.75;
    int cost = 7800;
    printf("The %d contestants ate %f berry pies.\n", number, pies);
    printf("The value of pi is %f.\n", PI);
    printf("Farewell! thou art too dear for my possessing, \n");
    printf("%c%d\n", '$', 2 * cost);

}
