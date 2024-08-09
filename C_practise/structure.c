#include <stdio.h>

struct student {
    int roll;
    char name[25];
};

void main(){
    struct student s1={1,"jeevesh"};
    printf("name of student is %s and his roll is %d",s1.name,s1.roll);
}