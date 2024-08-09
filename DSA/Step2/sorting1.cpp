#include <bits/stdc++.h>
using namespace std;
//to run ctrl + shift + b

void selection(int arr[],int n){
    //jis array ke portion me sort karna ha usko,jo har iteration me smaller hota jaye ga
    for(int i=0;i<n-1;i++){ 
        int mini=i;
        //uss array me smallest element dhundna
        for(int j=i;j<n;j++){ 
            if(arr[mini] > arr[j]){
                mini = j;
            }
        }
        //smallest element ko swap kar ke aage dalna
        int temp =arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
    
}
void bubble(int arr[],int n){
    int didswap = 0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp =arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didswap = 1;
            }
        }
        if(didswap){
            break;
        }
        //if array is sorted, below things wont print
        cout << "see\n";
    }
}

void insertion(int arr[],int n){
    for(int i=1;i<n;i++){
        int j=i;
        while(j>0){
            if(arr[j-1]>arr[j]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
            //cout<<"compromised"<<endl;
            // can also be written as
            // while(j>0 && (arr[j-1]>arr[j]){
            //     int temp = arr[j];
            //     arr[j] = arr[j-1];
            //     arr[j-1] = temp;
            // }  advantage of this is for best case loop will not work even for once.
            j--;           
        }
    }
}


int main(){
    int n ;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >>arr[i];
    insertion(arr,n);
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    } 
    return 0;
}