#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> a, long long k,int sum,int index,vector<int> output,
    vector<vector<int>> &ans){

        if( index >= a.size()){
            if(sum == k){
                for(auto it : output){
                  cout << it<<" ";  
                } 
                cout<<endl;
                ans.push_back(output);
            }
            return;
        }
        //include
        sum += a[index];
        output.push_back(a[index]);
        //if (sum <= k) {
        solve(a, k, sum, index + 1, output, ans);
        //}
        //exclude
        sum -= a[index];
        output.pop_back();
        solve(a,k,sum,index+1,output,ans);
}
vector<vector<int>> subarraysWithSumK(vector<int> a,long long k) {
    // Write your code here
    vector<vector<int>> ans;
    vector<int> output;
    int index =0;
    //int sum =0;
    solve(a,k,0,index,output,ans);
    return ans;
}


int main(){
    vector<int> a={1,2,3,1,1,1};
    long long k = 3;
    vector<vector<int>> ans = subarraysWithSumK(a,k);
    cout<< "ans vector" <<endl;
    for(auto it : ans){
        for(auto it2 : it){
            cout << it2<<" ";  
        }
        cout<<endl;
    } 
    cout<<endl;
    return 0;
}