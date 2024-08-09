#include <stdio.h>

int queue[5];
int front = -1;
int rear = -1;

void push(int data){
    if(rear>=4){
        printf("Overflow\n");
        return;
    }
    else if(front ==-1){
        front++;
        rear++;
        queue[front] = data;
        printf("%d added\n",data);
    }
    else{
        rear++;
        queue[rear]=data;
        printf("%d added\n",data);
    }
}
void pop(){
    if(rear<=-1){
        printf("underflow\n");
    }
    else if(front==rear){ // 
        printf("deleted element = %d\n",queue[front]);
        front--;
        rear--;
    }
    else{
        printf("deleted element = %d\n",queue[rear]);
        rear--;
    }
}
void Top(){
    printf("topmost element present = %d\n",queue[front]);
}
void size(){
    printf("size of queue = %d\n",rear+1);
}
void display(){
    for(int i =0;i<5;i++){
        printf("%d\n",queue[i]);
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