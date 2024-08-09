#include <stdio.h>
#include <stdlib.h>

struct TreeNode{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* TreeCreation(char arr[], int start, int end) {
    if (start > end) {
        return NULL;
    }
    int mid = (start + end) / 2;
    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->val = arr[mid];
    
    root->left = TreeCreation(arr, start, mid - 1);
    root->right = TreeCreation(arr, mid + 1, end);

    return root;
}

void reverseArray(char arr[], int start,int end) {
    while (start < end) {
        char temp = arr[start];
        arr[start++] = arr[end];
        arr[end++] = temp;
    }
}

void UpdateArray(char arr[],int n){
    int size;
    for(size = 1; size!='\0'; size++);
    reverseArray(arr,0,n-1);
    reverseArray(arr,0,size-1);
    reverseArray(arr,n,size-1);
}

void preorder(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }
    printf("%c ", root->val);
    preorder(root->left);
    preorder(root->right);
}

// void main(){
//     char arr[] ="ylmeup*naihr";
//     int n = 10;
//     struct TreeNode *root = TreeCreation(arr,0,n-1);
//     preorder(root);
// }

void main(){
    //char array containing 10 elements
    char arr[] = "ylmeup*naihr";
    int n;
    for(n = 0; n!='\0'; n++);
    struct TreeNode *root = TreeCreation(arr,0,n-1);
    preorder(root);
    printf('-');

    updateArray(arr,4);

    struct TreeNode *root = TreeCreation(arr,0,n-2);
    preorder(root);
    printf('-');

    updateArray(arr,2);

    struct TreeNode *root = TreeCreation(arr,0,n-1);
    preorder(root);
    printf('-');

    updateArray(arr,1);

    struct TreeNode *root = TreeCreation(arr,0,n-3);
    preorder(root);
}