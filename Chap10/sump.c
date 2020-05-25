//
// Created by  huyangh on 2020/5/16.
//
// sum up an array with two pointers

int sump(const int * start, const int * end){
    int total = 0;

    while (start < end){
        total += *start;
        start ++;
    }

    return total;
}
