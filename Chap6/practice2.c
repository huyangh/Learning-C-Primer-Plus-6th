//
// Created by huyan on 2020/5/15.
//
//使用嵌套循环，按下面的格式打印字符：
//$
//$$
//$$$
//$$$$
//$$$$$

#include <stdio.h>
void practice2(){

    char dollar = '$';

    for (int i = 0; i < 5; i++){
        for(int j = 0; j <= i; j++){
            printf("%c", dollar);
        }
        printf("\n");
    }
}
