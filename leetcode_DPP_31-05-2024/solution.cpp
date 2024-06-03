// Difficulty-Level: MEDIUM

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;


// 1. Using Unordered_map
// Time Complexity: O(n) 
// Space complexity: O(n)
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        long int total = 0;
        vector<int>output;
        long int diff = 0;
        unordered_map<long int, int>factor;

        for(int i=0; i<nums.size(); i++)
        {
            total += nums[i];
        } 

        for(int i=0; i<nums.size(); i++)
        {
            diff = total - nums[i];
            factor[diff]++;
        }

        for(auto x: factor)
        {
            if(x.second == 1)
            {
                output.push_back(total-x.first);
            }
        }
        return output;

    }
};