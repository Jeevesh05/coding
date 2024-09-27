#include <iostream>
using namespace std;

void pattern(int n){
    for(int i = 0;i<2*n; i++){
        for(int j = 0; j<2*n; j++){
            if(i==j || i==0 || i==2*n-1 || i==2*n-j){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

}

int main(){
    int n = 5;
    pattern(n);
    return 0;
}