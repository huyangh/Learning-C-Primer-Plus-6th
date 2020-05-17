//
// Created by huyan on 2020/5/16.
//
//power()函数返回一个double类型数的正整数
//次幂。改进该函数，使其能正确计算负幂。另外，函数要处理0的任何次幂
//都为0，任何数的0次幂都为1（函数应报告0的0次幂未定义，因此把该值处
//理为1）。要使用一个循环，并在程序中测试该函数。

double power(double a, int b){
    double tmp = 1.0;

    if ((a == 0) && (b == 0))
        return -1;
    if (a == 0)
        return 0;
    if (b == 0)
        return 1;
    if (b > 0){
        for (int i = 1; i <= b; i++){
            tmp *= a;
        }
    } else if (b < 0){
        for (int i = 1; i <= -b; i++){
            tmp *= a;
        }
        tmp = 1 / tmp;
    }

    return tmp;

}
