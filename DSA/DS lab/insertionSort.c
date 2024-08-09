#include <stdio.h>
#include <stdlib.h>


void insertionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        
    }
}

void printArray(int arr[],int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(){
    int n=5;
    int arr[5] = {55,44,85,23,99};
    insertionSort(arr,n);
    printArray(arr,n);
    return 0;
}