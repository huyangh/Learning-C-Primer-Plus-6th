//
// Created by  huyangh on 2020/5/24.
//编写一个程序，提示用户输入一个身高（单位：厘米），并分别以厘米和英寸为单位显示该值，
//允许有小数部分。程序应该能让用户重复输入身高，直到用户输入一个非正值。其输出示例如下：
//Enter　a　height　in　centimeters:　182
//182.0　cm　=　5　feet,　11.7　inches
//Enter　a　height　in　centimeters　(<=0　to　quit):　168.7
//168.0　cm　=　5　feet,　6.1　inches
//Enter　a　height　in　centimeters　(<=0　to　quit):　0
//bye
#include <stdio.h>
void practice4(){
    const float cm_to_inch = 0.3937f;
    const float feet_to_inch = 12.0f;
    float height = 1.0f;
    printf("Enter a height in centimeters:");
    scanf("%f", &height);

    while (height > 0){
        float height_in_inches = height * cm_to_inch;
        int feet = height_in_inches / feet_to_inch;
        float inches = height_in_inches - feet * feet_to_inch;
        printf("%.1f cm = %d feet, %.1f inches.\n", height, feet, inches);
        printf("Enter a height in centimeters (<=0 to quit):");
        scanf("%f", &height);
    }
    puts("\nBye.\n");

}

