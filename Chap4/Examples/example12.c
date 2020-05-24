//
// Created by huyan on 2020/5/15.
//
// 不匹配的浮点型转换

#include <stdio.h>
void example12(void){
    float n1 = 3.0;
    double n2 = 3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;
    printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);    //n3,n4被扩展为8字节输出
    printf("%ld %ld\n", n3, n4);
    printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);    //%ld打印浮点数失败
}
