#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int findMaxK(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int i=0, j=nums.size()-1;
        while(i<j)
        {
            if(nums[i] + nums[j] < 0)
                i++;

            if(nums[i] + nums[j] > 0)
                j--;

            if(nums[i] + nums[j] == 0)
                return nums[j];
        } 
        return -1;   
    }
};