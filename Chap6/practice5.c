//
// Created by huyan on 2020/5/15.
//
//编写一个程序，提示用户输入大写字母。使用嵌套循环以下面金字塔型的格式打印字母：
//    A
//   ABA
//  ABCBA
// ABCDCBA
//ABCDEDCBA
//打印这样的图形，要根据用户输入的字母来决定。例如，上面的图形是在用户输入E后的打印结果。

#include <stdio.h>
void practice5(){
    char letter;

    printf("Please input a uppercase letter: \n");
    scanf("%c", &letter);
    int length = letter - 'A' + 1;

    for (int i = 0; i < length; i++)
    {
        char temp = 'A' - 1;
        for (int j = 0; j < (length - i - 1); j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%c", ++temp);
        }
        for (int j = 0; j < i; j++)
        {
            printf("%c", --temp);
        }

        printf("\n");
    }

}