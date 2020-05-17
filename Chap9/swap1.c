//
// Created by huyan on 2020/5/16.
//
// Swap with pointer

void interchange(int* u, int* v){
    int temp;
    temp = *u;
    *u = *v;
    *v = temp;
}