#include <stdio.h>
//13
int infix[20];
int postfix[20];

int top = -1;

void push(int data){
    if(top>=4){
        printf("Overflow\n");
        return;
    }
    else{
        top++;
        infix[top]=data;
        printf("element added\n");
    }
}
void pop(){
    if(top<=-1){
        printf("underflow\n");
    }
    else{
        printf("deleted element = %d\n",infix[top]);
        top--;
    }
}
void Top(){
    printf("topmost element present = %d\n",infix[top]);
}
void size(){
    printf("size of infix = %d\n",top+1);
}
void display(){
    for(int i =0;i<5;i++){
        printf("%d\n",infix[4-i]);
    }
}
int main(){
    pop();
    push(5);
    Top();
    size();
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display();
    return 0;
}