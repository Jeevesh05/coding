#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

vector<int> nextGreaterPermutation(vector<int> nums)
{
    int n = nums.size();
    int i = n - 1;
    while (i > 0)
    {
        if (nums[i] > nums[i - 1])
        {
            i--;
            break;
        }
        i--;
    }
    cout << nums[i] << endl;
    if (i >= 0)
    {
        // find smallest among i+1 and n
        int min = nums[i + 1];
        for (int j = i + 1; j < n; j++)
        {
            if (min < nums[i])
                min = nums[i];
        }
        cout << "min = " << min << endl;
        swap(min, nums[i]);
        sort(nums.begin() + i + 1, nums.end());
    }
    else
    {
        reverse(nums.begin(), nums.end());
    }
    return nums;
}

int main()
{
    vector<int> A = {1, 2, 3};
    cout << "The Original arr is: [";
    for (auto it : A)
    {
        cout << it << " ";
    }
    cout << "]" << endl;
    vector<int> ans = nextGreaterPermutation(A);

    // cout << "The next permutation is: [";
    // for (auto it : ans)
    // {
    //     cout << it << " ";
    // }
    // cout << "]";
    return 0;
}