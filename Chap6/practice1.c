//
// Created by huyan on 2020/5/15.
//
// 编写一个程序，创建一个包含26个元素的数组，并在其中储存26个小
//写字母。然后打印数组的所有内容

#include <stdio.h>
void practice1(){

    char letters[26];
    int i;
    char a;

    for (i = 1, a = 'a'; i <= 26; i++, a++) {
        letters[i] = a;
        printf("%c", letters[i]);
    }
}
