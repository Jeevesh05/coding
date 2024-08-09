//accessing elements of structure using pointer
#include <stdio.h>

struct student {
    int age;
    char name[25];
};

void main(){
    struct student *p,s1={21,"jeevesh"};
    p = &s1;
    printf("name of student is %s\n",(*p).name);
    printf("his age is %d",p->age);

}