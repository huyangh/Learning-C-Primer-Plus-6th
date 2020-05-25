//
// Created by  huyangh on 2020/5/16.
//
// Fibonacci function with cycles

int Fibonacci(int n){
    int ff[100];

    ff[0] = ff[1] = 1;
    for (int i = 2; i <= 100; i++){
        ff[i] = ff[i-1] + ff[i-2];
    }
    return ff[n-1];
}
