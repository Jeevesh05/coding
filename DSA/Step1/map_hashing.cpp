#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n; 
    int arr[n];
    for(int i=0;i<n;i++){ 
        cin >> arr[i];
    }
    //pre compute
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    //iterate
    for(auto it:mpp){
        cout << it.first << "-->" << it.second << endl;
    }
    cout<<mpp[0]<< endl;
    cout<<mpp[1]<< endl;
    
    return 0;
    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        //fetch
        cout<< mpp[num]<<endl;
    }
    return 0;
}