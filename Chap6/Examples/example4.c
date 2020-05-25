//
// Created by  huyangh on 2020/5/25.
/* while2.c -- 注意分号的位置 */
#include <stdio.h>
void example4(){
    int n = 0;
    while (n++ < 3);      /* 第7行 */
    printf("n is %d\n", n); /* 第8行 */
    printf("That's all this program does.\n");
}
