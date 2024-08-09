#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "enter size of array :";
    cin >> n; //let 5
    int arr[n];
    cout << "enter elements of array : ";
    for(int i=0;i<n;i++){ //{1,3,2,3,1}
        cin >> arr[i];
    }
    //precompute,means creating a hash array
    int hash[13]={0};// size of hash array = size of array+1
    for(int i=0;i<n;i++){//eg i=1                    //i=3
        hash[arr[i]] += 1;//arr[i]=3, hash[3] = 0+1  //arr[3]=3,hash[3]=1+1
    }
    //hash = {0,2,1,2,0,0,0,0,0,0,0,0,0} (frequency of {0,1,2,3,4,5,6,7,8,9,10,11,12})

    cout << "enter no. of queries : ";
    int q;
    cin >> q;
    while(q--){
        int number;
        cout << "enter query : ";
        cin >> number;
        //fetch
        cout << hash[number] << endl;
    }

    return 0;
}