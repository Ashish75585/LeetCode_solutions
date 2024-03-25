// 442. Find All Duplicates in an Array
#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

// 1. Using Hash Map;
// Time Complexity: O(n)
// Space Complexity: O(n)
// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//         vector<int>ans;
//         unordered_map<int, int>mp;
//         for(int ele: nums)
//         {
//             mp[ele]++;
//         }
//         for(auto it = mp.begin(); it != mp.end(); it++)
//         {
//             if(it->second > 1)
//                 ans.push_back(it->first);
//         }
//         return ans;
//     }
// };

// 2. Optimal Solution.
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int x=abs(nums[i]);
            if(nums[x-1]<0)
                ans.push_back(x);
            nums[x-1]*=-1;
        }
        return ans;
    }
};

int main()
{
    Solution st;
    vector<int> nums = {1,2,3,4,8,3,1};
    vector<int> ans = st.findDuplicates(nums);
    for(auto ele: ans)
        printf("%d ",ele);

    return 0;
}
