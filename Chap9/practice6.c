//
// Created by  huyangh on 2020/5/16.
//
//编写并测试一个函数，该函数以3个double变量的地址作为参数，把最
//小值放入第1个函数，中间值放入第2个变量，最大值放入第3个变量。
//注意安排if语句的顺序

void practice6(double * a, double * b, double * c){

    double tmp;

    if (*a > *b){
        tmp = *a;   *a = *b;    *b = tmp;
    }

    if (*a > *c){
        tmp = *a;   *a = *c;    *c = tmp;
    }

    if (*b > *c){
        tmp = *b;   *b = *c;    *c = tmp;
    }

}
