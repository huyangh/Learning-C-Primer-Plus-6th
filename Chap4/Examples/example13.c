//
// Created by huyan on 2020/5/15.
//
// printf()的返回值

#include <stdio.h>
void example13(void){
    int bph2o = 212;
    int rv;
    rv = printf("%d F is water's boiling point.\n", bph2o);
    printf("The printf() function printed %d characters.\n", rv);

}
