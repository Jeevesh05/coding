#include <stdio.h>

int m = 5;
int n = 10;

void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("from function \n");
    printf("%d %d\n",m,n);
}

void main(){
    printf("outside function \n");
    printf("%d %d\n",m,n);
    swap(&m,&n);
    
}