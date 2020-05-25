//
// Created by  huyangh on 2020/5/15.
// 根据用户键入的整数求和

#include <stdio.h>
void example1(){
    long num;
    long sum = 0L;
    int status;

    printf("Please enter an integer to be summed "
           "(q to quit): ");
    status = scanf("%ld", &num);

    while (status == 1){
        sum += num;
        printf("Please enter next integer (q to quit): ");
        status = scanf("%ld", &num);
    }
    printf("Those integers sum to %ld.\n", sum);
}

