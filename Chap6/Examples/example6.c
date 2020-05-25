//
// Created by  huyangh on 2020/5/25.
/* t_and_f.c -- C中的真和假的值 */
#include <stdio.h>
void example6(){
    int true_val, false_val;
    true_val = (10 > 2);    // 关系为真的值
    false_val = (10 == 2); // 关系为假的值
    printf("true = %d; false = %d \n", true_val, false_val);
}

