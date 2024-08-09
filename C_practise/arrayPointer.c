#include <stdio.h>

void main(){
    int x[5] = {5,10,15,20,25};
    int* p;
    p = &x[0]; // if only &x is used then warning :assignment from incompatible pointer type
    printf("%d\n",x[0]);
    printf("%d\n",p);
    printf("%d\n",(p+6));
    printf("%d\n",*(p+6));
}