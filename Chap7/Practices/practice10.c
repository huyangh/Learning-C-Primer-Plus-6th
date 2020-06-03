//
// Created by huyangh on 2020/6/3.
//1988年的美国联邦税收计划是近代最简单的税收方案。它分为4个类别，每个类别有两个等级。
//下面是该税收计划的摘要（美元数为应征税的收入）：

//类别                税金
//单身                17850美元按15%计，超出部分按28%计
//户主                23900美元按15%计，超出部分按28%计
//已婚，共有           29750美元按15%计，超出部分按28%计
//已婚，离异           14875美元按15%计，超出部分按28%计

//例如，一位工资为20000美元的单身纳税人，应缴纳税费
//0.15 ×17850 + 0.28 ×（20000−17850）美元。编写一个程序，让用户指定缴纳
//税金的种类和应纳税收入，然后计算税金。程序应通过循环让用户可以多次输入。
#include <stdio.h>
#define SINGLE   17850
#define OWNER    23900
#define MARRIED  29750
#define DIVORCED 14875
#define RATE1    0.15
#define RATE2    0.28
void practice10(){
    int choice = 0;
    int status = 0;
    double salary, tax;
    printf("*******************************************************\n"
           "Enter the number corresponding to your status:\n"
           "1) single              2) owner\n"
           "3) married             4) divorced\n"
           "*******************************************************\n");
    while (status == 0){
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                status = SINGLE;
                break;
            case 2:
                status = OWNER;
                break;
            case 3:
                status = MARRIED;
                break;
            case 4:
                status = DIVORCED;
                break;
            default:
                puts("Invalid input! Try again.");
                status = 0;
                getchar();
                break;
        }
    }

    printf("Enter the salary you earn:\n");
    scanf("%lf", &salary);

    if (salary > status)
        tax = status * RATE1 + (salary - status) * RATE2;
    else
        tax = salary * RATE1;

    printf("The tax you should pay is: %.2f.\n", tax);

}