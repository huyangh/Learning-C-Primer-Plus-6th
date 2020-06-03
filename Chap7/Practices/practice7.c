//
// Created by huyangh on 2020/6/3.
//编写一个程序，提示用户输入一周工作的小时数，然后打印工资总额、税金和净收入。做如下假设：
//a.基本工资 = 10.00美元/小时
//b.加班（超过40小时） = 1.5倍的时间
//c.税率： 前300美元为15%
//续150美元为20%
//余下的为25%
//用#define定义符号常量。不用在意是否符合当前的税法。
#include <stdio.h>

#define SALARY_PER_HOUR 10.00
#define BASE_TIME 40
#define TIME_RATE 1.5

#define BASE1 300
#define BASE2 150
#define TAX_RATE1 0.15
#define TAX_RATE2 0.2
#define TAX_RATE3 0.25

void practice7(){
    double time, salary, tax;
    puts("Please input the hours you work in a week: \n");
    scanf("%lf", &time);
    if (time >= BASE_TIME)
        salary = (BASE_TIME + (time - BASE_TIME) * TIME_RATE) * SALARY_PER_HOUR;
    else
        salary = time * SALARY_PER_HOUR;

    if (salary <= BASE1)
        tax = salary * TAX_RATE1;
    else if (salary <= BASE1 + BASE2)
        tax = BASE1 * TAX_RATE1 + (salary - BASE1) * TAX_RATE2;
    else
        tax = BASE1 * TAX_RATE1 + BASE2 * TAX_RATE2 + (salary - BASE1 - BASE2) * TAX_RATE3;

    printf("The salary you earn is: %.2f.\n", salary);
    printf("The tax you should pay is: %.2f.\n", tax);
    printf("The profit you earn is: %.2f.\n", salary - tax);
}

