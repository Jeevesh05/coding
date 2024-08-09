#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    int newData;
    struct Node* next;
};

void main(){
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    
    printf("%p\n",*new);
    printf("%p\n",&(new->data));
    printf("%p\n",&(new->next));
    printf("%ld\n",sizeof(struct Node));
}