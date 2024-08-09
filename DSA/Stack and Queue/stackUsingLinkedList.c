#include <stdio.h>
#include <stdlib.h>

struct stack* head = NULL;
struct stack* tail;

struct stack {
    int data;
    struct stack* next;
};

void push(int newData) {
    //y for a new node
    struct stack* newNode = (struct stack*)malloc(sizeof(struct stack));
    
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
    
}
void pop(){
    if(head == NULL){
        printf("underflow\n");
        return;
    }
    struct stack* d = head;
    head = head->next;
    printf("delete element %d\n",d->data);
    free(d);
}

void display() {
    struct stack* temp = head;
    while (temp->next != NULL) {
        printf("%d \n", temp->data);
        temp = temp->next;
    }
    printf("%d\n", temp->data);
    //printf("\n");
}

int main(){
    pop();
    push(5);
    push(10);
    push(15);
    display();
    pop();
}