//
// Created by huyan on 2020/5/16.
//
// 在数组中使用指定初始化

#include <stdio.h>
#define MONTHS 12
void designate(){
    int days[MONTHS] = {31, 28, [4] = 31, 30, 31, [1] = 29};
    for (int i = 0; i < MONTHS; i++) {
        printf("%2d %d\n", i + 1, days[i]);
    }
}
