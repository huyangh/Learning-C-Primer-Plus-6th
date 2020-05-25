//
// Created by  huyangh on 2020/5/15.
//
// scanf()何时使用&
#include <stdio.h>

void example15(void){
    int age;
    float assets;
    char pet[30];

    printf("Enter your age, assets and favorite pet.\n");
    scanf("%d %f %s", &age, &assets, pet);

    printf("%d $%.2f %s\n", age,assets, pet);
}
