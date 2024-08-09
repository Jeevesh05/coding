#include <stdio.h>
#include <stdlib.h>

// Structure for Data Node
struct DataNode {
    int data;
    struct DataNode *next;
};

// Structure for Header Node
struct HeaderNode {
    int count; // keeps track of the number of data nodes
    struct DataNode *nextData;
};


void insertAtBack(struct HeaderNode* header,int newData){
        struct DataNode* n = (struct DataNode*)malloc(sizeof(struct DataNode));
        n -> data = newData;
        n -> next = NULL;
        if (header->nextData == NULL) {
            header->nextData = n;
        } 
        else {
            struct DataNode *temp = header->nextData;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = n;
        }
    header->count++;
}
void displayDataNodes(struct HeaderNode *header) {
    struct DataNode *temp = header->nextData;
    printf("Number of Data Nodes: %d\n", header->count);
    printf("Data Nodes:\n");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}


void main(){
    struct HeaderNode *header = (struct HeaderNode *)malloc(sizeof(struct HeaderNode));
    header->count = 0;
    header->nextData = NULL;
    insertAtBack(header,5);
    insertAtBack(header,50);
    displayDataNodes(header);
}