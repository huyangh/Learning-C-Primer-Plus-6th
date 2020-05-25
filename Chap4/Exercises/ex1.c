//
// Created by  huyangh on 2020/5/15.
//
// 编写一个程序，提示用户输入名和姓，然后以“名,姓”的格式打印出来。

#include <stdio.h>
void ex1(void){
    char firstname[30];
    char lastname[30];
    printf("Please input your first name and last name: \n");
    scanf("%s %s", firstname, lastname);
    printf("Your name is: %s, %s.\n", firstname, lastname);
}
