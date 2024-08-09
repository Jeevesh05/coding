#include <stdio.h>
#include <stdlib.h>

struct Node* head = NULL;
struct Node* tail;

struct Node {
    int data;
    struct Node* next;
};


void insertAtHead(int newData) {
    //y for a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
    
}

void insertAtBack(int newData){
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp;
    n -> data = newData;
    n -> next = NULL;
    if(head == NULL){
       head = n;
    }
    else{
        temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = n;
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

void deleteBefore(int value){
    struct Node *temp,*p,*d;
    temp = head;

    if(head == NULL && head->next == NULL){
        printf("list is empty or consist only 1 node\n");
        return;
    }
    if(head->next->data == value){
        deleteBeg();
        return;
    }
    if(head->data == value){
        printf("deletion not possible before head\n");
        return;
    }
    while(temp->next != NULL && temp->next->data != value){
        p = temp;
        temp = temp->next;
    }
    if(temp->next == NULL){
        printf("value not found\n");
        return;
    }
    d = temp;
    p->next = temp ->next;
    free(d);
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
    while (temp->next != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d ", temp->data);
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

int main() {
    //int newData; 
    insertAtBack(5);
    //printf("Insert data  :");
    //scanf("%d", &newData);
    insertAtBack(10);
    insertAtBack(25);
    insertAtAfter(10,15);
    insertAtBefore(25,20);
    display();
    deleteBefore(15);
    display();
    //deleteAfter(10);
    //display();
    //deleteLast();
    //display();

    return 0;
}
