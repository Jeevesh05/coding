#include <bits/stdc++.h>
using namespace std;

//print name n times using recursion // in main function call (1,n)
// tc = O(n) = sc(internal memory is using stack space)
void f1(int i,int n){
    if(i>n) return;
    else 
    {
        cout<<"name" <<'\n';
        f1(i+1,n);
    }
}
//print 1 to n
void f2(int i,int n){
    if(i>n) return;
    else 
    {
        cout<<i <<'\n';
        f2(i+1,n);
    }
}
//print n to 1  // in  main fuction call (n,n)
void f3(int i,int n){
    if(i<1) return;
    else 
    {
        cout<<i <<'\n';
        f3(i-1,n);
    }
}
//print 1 to n using backtracking
void f4(int i,int n){
    if (i<1) return;
    else{
        f4(i-1,n);
        cout<<i<<'\n';
    }
}
//print n to 1 using backtracking
void f5(int i,int n){
    if(i>n) return;
    else{
        f5(i+1,n);
        cout<<i<<'\n';
    }
}

int main(){
    int n = 5;
    //cin >> n;
    f5(1,n);
    return 0;
}