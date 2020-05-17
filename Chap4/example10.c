//
// Created by huyan on 2020/5/15.
//
// 字符串格式

#include <stdio.h>
#define BLURB "Authentic imitation!"
void example10(void){
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%24.5s]\n", BLURB);    //只打印5个字符
    printf("[%-24.5s]\n", BLURB);   //-令文本左对齐
}
