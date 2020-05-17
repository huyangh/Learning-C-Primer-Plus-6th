//
// Created by huyan on 2020/5/15.
//
// 使用循环处理数组

#include <stdio.h>
#define SIZE 10
#define PAR 72

void example19(){
    int index, score[SIZE];
    int sum = 0;
    float average;

    printf("Enter %d golf scores:\n", SIZE);
    for (index = 0; index < SIZE; index ++){
        scanf("%d", &score[index]);
    }

    printf("The scores read in are as follows:\n");

    for (index = 0; index < SIZE; index ++){
        printf("%5d\n", score[index]);
        sum += score[index];
    }

        average = (float) sum /SIZE;
        printf("Sum of scores = %d, average = %.2f\n", sum, average);
        printf("That's a handicap of %.0f.\n", average - PAR);

}
