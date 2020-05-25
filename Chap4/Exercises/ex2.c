//
// Created by  huyangh on 2020/5/15.
//
// 编写一个程序，提示用户输入名和姓，并执行以下操作：
// a.打印名和姓，包括双引号；
// b.在宽度为20的字段右端打印名和姓，包括双引号；
// c.在宽度为20的字段左端打印名和姓，包括双引号；
// d.在比姓名宽度宽3的字段中打印名和姓。

#include <stdio.h>
#include <string.h>
void ex2(void){
    char fname[30];
    char lname[30];
    int w1 = strlen(fname) + 3;
    int w2 = strlen(lname) + 3;

    printf("Please input your first name and last name: \n");
    scanf("%s %s", fname, lname);
    printf("Your name is: \"%s %s\".\n", fname, lname); //a
    printf("Your name is: \"%10s %10s\".\n", fname, lname); //b
    printf("Your name is: \"%-10s %-10s\".\n", fname, lname); //c
    printf("Your name is: \"%*s %*s\".\n", w1, fname, w2, lname); //d

}