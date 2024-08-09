#include <stdio.h>

struct Graph{
    int e;
    struct Graph *next;
};
int n = 5;
struct Graph *G[5];

void main(){
    int x;
    struct Graph *T,*P;
    for(int i = 0;i<n;i++){
        G[i] =(struct Graph *)malloc(sizeof(struct Graph));
        G[i] ->e =i;
        G[i] ->next = NULL;
    }
}