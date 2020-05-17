//
// Created by huyan on 2020/5/15.
//
// 指数增长

#include <stdio.h>
#define SQUARES 64

void example5(){
    const double CROP = 2E16;   // 小麦年产量
    double current, total;
    int count = 1;

    total = current = 1.0;

    while (count < SQUARES){
        current = 2.0 * current;
        total = total + current;
        count = count + 1;
        printf("%4d %13.2e %12.2e %12.2e\n",
                count, current, total, total / CROP);
    }
}
