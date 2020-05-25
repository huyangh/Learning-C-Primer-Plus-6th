//
// Created by  huyangh on 2020/5/16.
//
//
double power_recur(double a, int b){

    if ((a == 0) && (b == 0))
        return -1;
    if (a == 0)
        return 0;
    if (b == 0)
        return 1;

    if (b > 0){
        return a * power_recur(a, b-1);
    } else if (b < 0){
        return (1 / a) * power_recur(a, b + 1);
    }
}
