//
// Created by huyangh on 2020/6/3.
//编写一个程序，只接受正整数输入，然后显示所有小于或等于该数的素数。
#include <stdio.h>
int isPrime(int n);

void practice9(){

    int num;

    puts("Please input an integer:");
    scanf("%d", &num);

    for (int i = 2; i <= num; ++i) {
        if (isPrime(i))
            printf("%d ", i);
    }
}

int isPrime(int n){
    int count = 0;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            count++;
    }
    if (count == 0)
        return 1;
    else
        return 0;
}
