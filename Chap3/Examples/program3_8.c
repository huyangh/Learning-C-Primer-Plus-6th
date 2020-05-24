//
// Created by huyan on 2020/5/14.
//
// 打印类型大小
#include <stdio.h>
void program3_8(void){
    // C99为类型大小提供%zd转换说明
    printf("int, %zd\n", sizeof(int));
    printf("char, %zd\n", sizeof(char));
    printf("long, %zd\n", sizeof(long));
    printf("long long, %zd\n", sizeof(long long));
    printf("double, %zd\n", sizeof(double));
    printf("long double, %zd\n", sizeof(long double));

}

