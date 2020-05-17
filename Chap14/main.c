#include <stdio.h>
#include <string.h>
#include <time.h>

typedef struct{
    char first[10];
    char last[10];
}Name;

typedef struct{
    char name[30];
    int score;
    Name names;
}Student;

enum spectrum {red, orange, yellow, green, blue, violet};


char * getnames(Name name);

int main() {
    Name name1 = {
            "Yang",
            "Hu"
    };
//    Student student[10];
//    Student *ptr = &student[0];
//
//    strcpy(student[0].name, "Yang Hu");
//    student[0].score = 100;
//
//    strcpy(ptr->names.first, "Yang");         //两种指针访问结构成员的方式
//    strcpy((*ptr).names.last, "Hu");

    char namesn[5];
    time_t a = time(0);
    strcpy(namesn, getnames(name1));
    printf("%s\n", namesn);
    printf("%d\n", red);                   //打印枚举常量的整数值
    printf("%d\n", a);                   //打印枚举常量的整数值

    return 0;
}

char * getnames(Name name){
    return strcat(name.first, name.last);
}