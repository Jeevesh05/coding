#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> nums,int index,vector<int> output,vector<vector<int>> 
    &ans){
        if(index >= nums.size()){
            ans.push_back(output);
            return;
        }
        //exclude
        solve(nums,index + 1,output,ans);
        //include
        int element = nums[index];
        output.push_back(element);
        solve(nums,index + 1,output,ans);
    }
            

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        solve(nums,index,output,ans);
        return ans;
    }


int main(){
    vector<int> a={1,2,3};
    //long long k = 3;
    vector<vector<int>> ans = subsets(a);
    for(auto it : ans){
        for(auto it2 : it){
            cout << it2<<" ";  
        }
        cout<<endl;
    } 
    cout<<endl;
    return 0;
}