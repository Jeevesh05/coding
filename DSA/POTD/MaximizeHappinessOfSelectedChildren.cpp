// 3075 "https://leetcode.com/problems/maximize-happiness-of-selected-children/"

long long maximumHappinessSum(vector& happiness, int k) {
    long long ans=0;
    int n=happiness.size();
    sort(happiness.begin(),happiness.end());
    for(int i=0;i<k;i++){ 
        if(happiness[n-1-i]-i<0){
            ans+=0;
            break;
        }
        ans+=happiness[n-1-i]-i;
    }
    return ans;
}

//if sorting is done in decresing order
class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long ans = 0;
        sort(happiness.begin(), happiness.end(), greater());
        int count=0;
        for(int i=0; i<k; i++){
            if(happiness[i] - count > 0){
                ans = ans + happiness[i] - count;
            }
            count++;
        }

        return ans;
    }
};