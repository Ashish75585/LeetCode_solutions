#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int minPatches(vector<int>& nums, int n) 
    {
        long int miss = 1;
        int i=0;
        int result=0;
        vector<int>val;

        while(miss <= n)
        {
            if(i<nums.size() && miss >= nums[i])
            {
                miss += nums[i];
                i++;
            }
            else
            {
                miss += miss;
                result += 1;
                val.push_back(miss);
            }
        }
        return result;
    }
};

int main()
{
    Solution st;
    vector<int>nums = {1,5,10};
    int val = st.minPatches(nums, 20);


    return 0;
}