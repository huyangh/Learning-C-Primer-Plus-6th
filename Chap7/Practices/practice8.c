//
// Created by huyangh on 2020/6/3.
//修改练习7的假设a，让程序可以给出一个供选择的工资等级菜单。使
//用switch完成工资等级选择。运行程序后，显示的菜单应该类似这样：
//*****************************************************************
//Enter the number corresponding to the desired pay rate or action:
//1) $8.75/hr              2) $9.33/hr
//3) $10.00/hr             4) $11.20/hr
//5) quit
//*****************************************************************
//如果选择 1～4 其中的一个数字，程序应该询问用户工作的小时数。程序要通过循环运行，
//除非用户输入 5。如果输入 1～5 以外的数字，程序应提醒用户输入正确的选项，
//然后再重复显示菜单提示用户输入。使用#define创建符号常量表示各工资等级和税率。
#include <stdio.h>
#include <stdbool.h>

#define SALARY_PER_HOUR_1 8.75
#define SALARY_PER_HOUR_2 9.33
#define SALARY_PER_HOUR_3 10.00
#define SALARY_PER_HOUR_4 11.20

#define BASE_TIME 40
#define TIME_RATE 1.5
#define BASE1 300
#define BASE2 150
#define TAX_RATE1 0.15
#define TAX_RATE2 0.2
#define TAX_RATE3 0.25

void practice8() {
    double salary_per_hour, time, salary, tax;
    int selection;

    bool end_program = false;
    bool need_input = true;
    printf("*****************************************************************\n"
           "Enter the number corresponding to the desired pay rate or action:\n"
           "1) $8.75/hr              2) $9.33/hr\n"
           "3) $10.00/hr             4) $11.20/hr\n"
           "5) quit\n"
           "*****************************************************************\n");
    while (need_input && !end_program){
        int input_valid = scanf("%d", &selection);
        if (input_valid && selection >= 1 && selection <= 5) {
            switch (selection) {
                case 1:
                    salary_per_hour = SALARY_PER_HOUR_1;
                    break;
                case 2:
                    salary_per_hour = SALARY_PER_HOUR_2;
                    break;
                case 3:
                    salary_per_hour = SALARY_PER_HOUR_3;
                    break;
                case 4:
                    salary_per_hour = SALARY_PER_HOUR_4;
                    break;
                case 5:
                    puts("Next time!");
                    end_program = true;
                    break;
                default:
                    break;
            }
            need_input = false;
        } else {
            puts("Invalid input! Try again.");
            getchar();
        }
    }

    if (!end_program){
        printf("The pay rate you chose is: $%.2f per hour.\n", salary_per_hour);
        puts("Please input the hours you work in a week: ");
        scanf("%lf", &time);
        if (time >= BASE_TIME)
            salary = (BASE_TIME + (time - BASE_TIME) * TIME_RATE) * salary_per_hour;
        else
            salary = time * salary_per_hour;

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
}

