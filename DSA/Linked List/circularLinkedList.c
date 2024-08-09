#include <stdio.h>
#include <stdlib.h>

struct Node* tail = NULL;

// Define a structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

void insertAtTail(int newData){
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n -> data = newData;
    
    if(tail == NULL){
        tail = n;
        n -> next = n;
    }
    else{
        n -> next = tail ->next;
        tail -> next = n;
        tail = n; 
    }
}
void insertAtHead(int newData){
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n -> data = newData;
    if(tail == NULL){
        tail = n;
        n -> next = n;
    }
    else{
        n -> next = tail ->next;
        tail -> next = n; 
    }
}
void insertBefore(int value,int newData){
    struct Node* temp = tail;
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    struct Node* previous;

    if(tail == NULL){
        printf("list does not exist\n");
        return;
    }
    //list exists
    if(temp->next->data == value){
        insertAtHead(newData);
        return;
    }
    do{
        previous = temp;
        temp = temp ->next;
    }while(temp != tail && temp->data != value);

    if( temp ->data == value){
        n -> data = newData;
        n->next = temp;
        previous -> next = n;
    }
    else{
        printf("value does not exist\n");
    }
     
}
void insertAfter(int value,int data){
    if(tail == NULL){
        printf("empty list");
        return;
    }
    struct Node *temp,*prev,*n;
    n = (struct Node*)malloc(sizeof(struct Node));
    n->data = data;
    temp=tail;
    do{
        temp = temp->next;
    }while(temp != tail && temp ->data != value);
    
    
    if(temp ->data == value){

        if(temp == tail){
            insertAtTail(data);
            return;
        }
        n->next = temp ->next;
        temp->next = n;
        return;
    }
    else{
        printf("value not found\n");
    } 
}
void deleteLast(){
    struct Node *temp,*d;
    temp = tail;
    while(temp->next != tail){
        temp = temp ->next; 
    }
    d = temp->next;
    temp->next = d->next;
    tail = temp;
    free(d);
}
void deleteBeg(){
    struct Node* d;
    d = tail->next;
    tail ->next = d->next;
    free(d);
}
void deleteAfter(int value){
    struct Node *temp,*d;
    temp = tail;
    //list does not exist
    if(tail == NULL){
        printf("List does not exist\n");
        return;
    }
    //list exist
    while(temp->next != tail && temp->data != value){
        temp = temp->next;
    }
    if(temp == tail){
        deleteBeg();
        return;
    }
    if (temp->data == value){
        if(temp->next == tail){
            deleteLast();
            return;
        }
        d = temp->next;
        temp->next = d->next;
        free(d);    
        return;
    }
}
void deleteBefore(int value){
    struct Node *temp,*p,*d;
    temp = tail;

    if(tail == NULL && tail->next == tail){
        printf("list is empty or consist only 1 node\n");
        return;
    }
    do{
        p = temp;
        temp = temp->next;
    }while(temp != tail && temp->data != value);
    if(p == tail){
        deleteLast();
        return;
    }
    if(temp->next->data == value){
        d = temp;
        p->next = temp ->next;
        free(d);
    }
    else{
        printf("value not found\n");
    }
    
}
void display() {
    struct Node* temp = tail;
    do  {
        temp = temp->next;
        printf("%d ", temp->data);
    }while (temp-> next != tail->next);
    printf("\n");
}

void main(){
    insertAtTail(5);
    insertAtTail(10);
    insertAtTail(15);
    insertAtHead(2);
    display();
    insertAfter(10,7);
    //printf("%d\n",tail->next->data);
    display();
}