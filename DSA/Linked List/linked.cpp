#include <bits/stdc++.h>
#include <map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
// using &head to pass head as call by reference so that no new copy of head would create
void insertAtHead(Node* &head,int newData){

    //new node creation
    Node* temp = new Node(newData);
    temp -> next = head;
    head = temp;
}
void display(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
int main(){
    //create a new node
    Node* n = new Node(10);
    Node *head = n;
    //cout << n -> data<< endl;
    insertAtHead(head,15);
    insertAtHead(head,20);
    insertAtHead(head,25);
    display(head);
    
    return 0;
}