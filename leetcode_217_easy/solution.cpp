#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        unordered_set<int>set;
        for(int ele : nums)
        {
            if(set.count(ele)>0)
                return true;
            set.insert(ele);
        }
        return false;  
    }
};

int main()
{
    Solution st;
    vector<int> nums = {1,2,3,1};

    return 0;
}