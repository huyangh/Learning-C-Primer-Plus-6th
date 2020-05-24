//
// Created by huyan on 2020/5/24.
//编写一个程序，显示求模运算的结果。把用户输入的第1个整数作为求模运算符的第2个运算对象，
// 该数在运算过程中保持不变。用户后面输入的数是第1个运算对象。当用户输入一个非正值时，
// 程序结束。其输出示例如下：
//This program computes moduli.
//Enter an integer to serve as the second operand: 256
//Now enter the first operand: 438
//438 % 256 is 182
//Enter next number for first operand (<= 0 to quit): 1234567
//1234567 % 256 is 135
//Enter next number for first operand (<= 0 to quit): 0
//Done

#include <stdio.h>
void practice8(){
    int operand1, operand2;
    puts("This program computes moduli.\n");
    puts("Enter an integer to serve as the second operand: ");
    scanf("%d", &operand2);
    puts("Now enter the first operand: ");
    scanf("%d", &operand1);

    while (operand1 > 0){
        printf("%d %% %d is %d.\n", operand1, operand2, operand1 % operand2);
        puts("Enter next number for first operand (<= 0 to quit): ");
        scanf("%d", &operand1);
    }
    puts("Done.\n");
}