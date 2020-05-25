//
// Created by huyangh on 2020/5/25.
//编写一个程序，在数组中读入8个整数，然后按倒序打印这8个整数。
#include <stdio.h>
void practice11(){
    int nums[8];
    printf("Please input 8 integers: \n");
    scanf("%d%d%d%d%d%d%d%d", &nums[0], &nums[1], &nums[2], &nums[3],
            &nums[4], &nums[5], &nums[6], &nums[7]);
    printf("The reversed numbers are:\n");
    for (int i = 7; i >= 0; --i) {
        printf("%d ", nums[i]);
    }
}
