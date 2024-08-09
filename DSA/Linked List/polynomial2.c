#include <stdio.h>
#include <stdlib.h>


struct poly *result;

// Define a structure for a node in the linked list
struct poly {
    int coefficient,power;
    struct poly* next;
};

void insertAtBack(struct poly *head,int coff,int pow){
//	printf("%d\t",coff);
//	printf("%d\n",pow);
//	return;
    struct poly* n = (struct poly*)malloc(sizeof(struct poly));
    struct poly* temp;
    n -> coefficient = coff;
    n -> power = pow;
	n -> next = NULL;
    if(head == NULL){
       head = n;
    }
    else{
        temp = head;
        while(temp ->next != NULL){
            temp = temp->next;
        }
        temp->next = n;
    }

}

//void addPoly(){
//    
//    struct poly* n1 = head1;
//    struct poly* n2 = head2;
//	struct poly *n = (struct poly*)malloc(sizeof(struct poly));
//	
//    while(n1 != NULL && n2 != NULL){
//        if(n1 -> power > n2 -> power){
//            result -> coefficient = n1 -> coefficient;
//            result -> power = n1 -> power;
//            n1 = n1->next;
//        }
//        else if(n1 -> power < n2 -> power){
//            result -> coefficient = n2 -> coefficient;
//            result -> power = n2 -> power;
//            n2 = n2->next;
//        }
//        else{ // n1 -> power == n2 -> power
//            result -> coefficient = (n1 -> coefficient) + (n2 -> coefficient);
//            result -> power = n2 -> power;
//            n1 = n1->next;
//            n2 = n2->next;
//        }
//
//        // when n2 list ends
//        while(n1 != NULL ){
//            result -> coefficient = n1 -> coefficient;
//            result -> power = n1 -> power;
//            n1 = n1->next;
//        }
//        // when n1 list ends
//        while(n2 != NULL ){
//            result -> coefficient = n2 -> coefficient;
//            result -> power = n2 -> power;
//            n2 = n2->next;
//        } 
//}

void display(struct poly *head) {
    struct poly *temp = head;
//    printf("%d\t", temp->coefficient);
//    printf("%d \n", temp->power);
//    return;
	while (temp != NULL) {
        printf("%d\t", temp->coefficient);
        printf("%d \n", temp->power);
		temp = temp->next;
    }
    
}

void main(){
	struct poly* head1 = NULL;
	struct poly* head2 = NULL;
	insertAtBack(&head1,2,7);
	insertAtBack(&head1,5,4);
	insertAtBack(&head1,34,0);
	
//	insertAtBack(head2,2,2);
//	insertAtBack(head2,12,1);
//	insertAtBack(head2,21,0);
//	printf("%d\t", head1->coefficient);
//    printf("%d \n", head1->power);
//    
	display(head1);
//	display(head2);
	
//	addPoly(head1,head2);
//	desplay(result);
}