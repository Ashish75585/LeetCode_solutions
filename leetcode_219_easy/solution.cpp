#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;


bool containsNearbyDuplicate(vector<int>& nums, int k) 
{
    unordered_map<int, int> mp;
    int i=0;
    for(i=0; i<static_cast<int>(nums.size()); i++)
    {
        if(mp.find(nums[i]) != mp.end())
        {
            if(abs(mp[nums[i]]-i)<= k)
                    return true;
            
        }
        mp[nums[i]] = i;
    }
    return false;
}

int main()
{
    vector<int>nums = {1,2,3,1};
    bool ans = containsNearbyDuplicate(nums, 3);
    printf("%d ", ans);

    return 0;
}