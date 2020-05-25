//
// Created by  huyangh on 2020/5/16.
//
// 使用rand1()和srand1()
static unsigned long int next = 1;               //seed
int rand1(){
    next = next * 1103515245 + 12345;
    return (int) (next / 65536) % 32768;
}

void srand1(unsigned int seed){
    next = seed;
}
