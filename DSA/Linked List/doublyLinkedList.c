#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node * head = NULL;


void insertAtHead(int newData) {
    //y for a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    
    newNode->data = newData;
    newNode->next = head;
    head ->prev = newNode;
    head = newNode;
}

void insertAtBack(int newData){
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp;
    n -> data = newData;
    n -> next = NULL;
    n -> prev = NULL;
    if(head == NULL){
       head = n;
    }
    else{
        temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = n;
        n ->prev = temp;
    }
}

void insertAtAfter(int value,int newData){
    if(head == NULL) printf("Linked list is empty.Call creation function first.\n");
    else{
        struct Node* temp = head;
        struct Node* n = (struct Node*)malloc(sizeof(struct Node)); 
        while(temp!= NULL && (temp->data) != value){
            temp = temp ->next;
        }
        if(temp == NULL){
            printf("Element not found.\n");
        }
        else if((temp->data) == value){
            n -> data = newData; 
            n -> next = temp -> next;
            temp -> next = n;           
        }
    }
    
}

void insertAtBefore(int value,int newData){
    struct Node* temp = head;
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    struct Node* previous;

    if(head == NULL){
        printf("list does not exist\n");
    }
    //list exists
    else{
        if(temp->data == value){
        insertAtHead(newData);
        }
        else{
            while(temp != NULL && temp->data != value){
                previous = temp;
                temp = temp ->next;
            }
            if(temp == NULL){
                printf("value does not exist\n");
            }
            //else if(temp->data == value){
            else{
                n -> data = newData;
                n->next = temp;
                previous -> next = n;
            }
        }
    }   
}

void deleteLast(){
    struct Node *temp = head,*previous;
    while(temp->next != NULL){
        previous = temp;
        temp = temp->next;
    }
    previous -> next = NULL;
    free(temp);
}

void deleteBeg(){
    struct Node* d = head;
    head = head->next;
    free(d);
}

void deleteAfter(int value){
    struct Node *temp,*d;
    temp = head;
    //list does not exist
    if(head == NULL){
        printf("List does not exist\n");
        return;
    }
    //list exist
    else{
        //finding the node where the value exist
        while(temp != NULL && temp->data != value){
            temp = temp->next;
        }
        if(temp == NULL){
            printf("data value not found\n");
        }
        else if(temp->data == value){
            if(temp->next == NULL){
                printf("deletion not possible after last node\n");
                return;
            }
            else if(temp->next->next == NULL){
                deleteLast();
                return;
            }
            else{
                d = temp->next;
                temp->next = d->next;
                free(d);    
            }
        }
        return;
    }
}

// when head needs to be passed as reference
// void display(struct Node **head) {
//     struct Node* temp = *head;
//     while (temp != NULL) {
//         printf("%d ", temp->data);
//         temp = temp->next;
//     }
//     printf("\n");
// }

void display() {
    struct Node* temp = head;
    while (temp ->next != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d ", temp->data);

    while (temp ->prev != NULL) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    //printf("%d ", temp->data);
    printf("\n");
}

void reverse(){
    struct Node *prev,*temp,*front;
    temp = head;
    prev = NULL;
    while(temp != NULL){
        front = temp ->next;
        temp ->next = prev;
        prev = temp;
        temp = front;
    }
    head = prev;
}

int main(){
    insertAtBack(5);
    insertAtBack(10);
    insertAtBack(15);
    display();
    //insertAtBack(20);
    insertAtHead(1);
    display();
    return 0;
}