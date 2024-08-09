#include <bits/stdc++.h>
using namespace std;

void printArr (int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//reverese an array using 2 pointers using recursion
int fun1(int arr[5],int l,int r){
    if(l>r) return 0;
    swap(arr[l],arr[r]);    //yeh else me aaye ga but this is also right
    fun1(arr,l+1,r-1);
}

//reverse using only one pointer
void fun2(int arr[5],int i,int len){
    if(i >= len/2) return;
    swap(arr[i],arr[len-i-1]);
    fun2(arr,i+1,len);
}

//check is string is pallindrome or not
bool check(string str,int i){
    if(i >= str.size()) return true;
    if(str[i] != str[str.size()-i-1]) return false;
    return check(str,i+1);
}

int main(){
    // const int size=5;
    // int arr[size]={1,2,3,4,5};
    // fun2(arr,0,size);
    // printArr(arr,size);
    string str="madam";
    cout<<check(str,0);
    return 0;
}