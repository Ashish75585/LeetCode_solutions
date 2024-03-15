#include<iostream>
#include<vector>

using namespace std;

// Brute Force.
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) 
    {
        int output=0;    
        for(int i=0; i<nums.size(); i++)
        {
            int sum=0;
            sum += nums[i];
            if(sum == goal)
                output++;
            for(int j= i+1; j<nums.size(); j++)
            {
                sum += nums[j];
                if(sum == goal)
                    output++;
            }
        }
        return output;
    }
};