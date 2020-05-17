#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern unsigned int rand0();
extern int rand1();
extern void srand1(unsigned int seed);


int main() {

    srand1((unsigned int) time(0));     //使用系统时间为种子

    for (int i = 0; i < 5; i++) {
        printf("%d\n", rand1());
    }

    return 0;
}
