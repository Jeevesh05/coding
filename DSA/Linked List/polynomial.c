#include <stdio.h>
#include <stdlib.h>

struct poly* head1 = NULL;
struct poly* head2 = NULL;
struct poly *result = NULL;

// Define a structure for a node in the linked list
struct poly {
    int coff,pow;
    struct poly* next;
};

void insertAtBack(struct poly **h,int coeff,int power){
    struct poly* n = (struct poly*)malloc(sizeof(struct poly));
    struct poly* temp;
    n -> coff = coeff;
    n -> pow = power;
    n -> next = NULL;
    if(*h == NULL){
       *h = n;
    }
    else{
        temp = *h;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = n;
    }
}

void addPoly(){
    struct poly* n1 = head1;
    struct poly* n2 = head2;
    while(n1 != NULL && n2 != NULL){
        if(n1 -> pow > n2 -> pow){
            insertAtBack(&result,n1 -> coff,n1 -> pow);
            n1 = n1->next;
        }
        else if(n1 -> pow < n2 -> pow){
            insertAtBack(&result,n2 -> coff,n2 -> pow);
            n2 = n2->next;
        }
        else{ // n1 -> pow == n2 -> power
            insertAtBack(&result,n1->coff + n2->coff,n1 -> pow);
            n1 = n1->next;
            n2 = n2->next;
        }
    }

        // when n2 list ends
    while(n1 != NULL ){
        insertAtBack(&result,n1 -> coff,n1 -> pow);
        n1 = n1->next;
    }
    // when n1 list ends
    while(n2 != NULL ){
        insertAtBack(&result,n2 -> coff,n2 -> pow);
        n2 = n2->next;
    } 
}


void display(struct poly **N){
    struct poly *temp;
    temp = *N; 
    while(temp!=NULL){
        printf("Coffi=%d Power=%d \n",temp->coff,temp->pow);
        temp=temp->next;
    }
}

int main(){
    insertAtBack(&head1,5,3);
    insertAtBack(&head1,4,2);
    insertAtBack(&head1,3,1);
    insertAtBack(&head1,2,0);
    printf("\npoly 1 \n");
    display(&head1);
    insertAtBack(&head2,5,3);
    insertAtBack(&head2,4,2);
    insertAtBack(&head2,3,1);
    insertAtBack(&head2,2,0);
    printf("\npoly 2 \n");
    display(&head2);
    addPoly();
    printf("\nresult poly \n");
    display(&result);
    return 0;
}