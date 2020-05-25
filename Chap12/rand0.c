//
// Created by  huyangh on 2020/5/16.
//
// 生成随机数 0~32767 （伪随机）

static unsigned long int next = 1;               //seed
unsigned int rand0(){
    next = next * 1103515245 + 12345;
    return (unsigned int) (next / 65536) % 32768;
}
