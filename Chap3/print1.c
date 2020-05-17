//
// Created by huyan on 2020/5/14.
// printf()的一些特性
//
void program3_2(void){
    int ten = 10;
    int two = 2;
    printf("Doing it right: ");
    printf("%d minus %d is %d\n", ten, 2, ten - two);
    printf("Doing it wrong: ");
    printf("%d minus %d is %d\n", ten);       // Two parameters neglected;

}
