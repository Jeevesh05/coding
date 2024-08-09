#include <stdio.h>

int stack[5];
int top = -1;

void push(int data){
    if(top>=4){
        printf("Overflow\n");
        return;
    }
    else{
        top++;
        stack[top]=data;
        printf("element added\n");
    }
}
void pop(){
    if(top<=-1){
        printf("underflow\n");
    }
    else{
        printf("deleted element = %d\n",stack[top]);
        top--;
    }
}
void Top(){
    printf("topmost element present = %d\n",stack[top]);
}
void size(){
    printf("size of stack = %d\n",top+1);
}
void display(){
    for(int i =0;i<5;i++){
        printf("%d\n",stack[4-i]);
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