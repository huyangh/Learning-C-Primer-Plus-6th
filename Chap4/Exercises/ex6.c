//
// Created by huyan on 2020/5/24.
// 编写一个程序，先提示用户输入名，然后提示用户输入姓。在一行打印用户输入的名和姓，
// 下一行分别打印名和姓的字母数。字母数要与相应名和姓的结尾对齐，如下所示：
//Melissa Honeybee
//      7　　　　 8
//接下来，再打印相同的信息，但是字母个数与相应名和姓的开头对齐，如下所示：
//Melissa Honeybee
//7　　　  8

#include <stdio.h>
#include <string.h>
void ex6(){
    char first_name[20];
    char last_name[20];
    printf("Please input your first name and last name(separated by space):\n");
    scanf("%s %s", first_name, last_name);
    int first_length = (int)strlen(first_name);
    int last_length = (int)strlen(last_name);
    printf("%s %s\n", first_name, last_name);
    printf("%*d %*d\n", first_length, first_length, last_length, last_length);
    printf("%s %s\n", first_name, last_name);
    printf("%-*d %-*d\n", first_length, first_length, last_length, last_length);

}