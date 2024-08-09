#include <bits/stdc++.h>
using namespace std;
//add numbers till n

//by prameterised way
void fun1(int n, int sum){
    if(n<1){
        cout<<sum;    
        return;
    } 
    else{
    	sum=sum + n;
        fun1(n-1,sum);
    }
}
//by functional recursion
int fun2(int n){
    if(n==0) return 0;
    else {
        return n + fun2(n-1);
    }
}
//factorial by functional recursion
int fact(int n){
    if(n==0) return 1;
    else return n * fact(n-1);
}
int main(){
    int n =5;
    cout<<fact(n);
    return 0;
}
