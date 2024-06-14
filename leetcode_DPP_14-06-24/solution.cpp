// leetcode---medium----945----Minimum increment to make array unique.

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// Approach-1-------- Using Sorting.
class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int count = 0;

        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i] <= nums[i-1])
            {
                count += nums[i-1]-nums[i]+1;
                nums[i] = nums[i-1]+1;
            }
        }
        return count;

    }
};


// Approach-2 --------- Using Count Sort.
class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) 
    {
        int max_ele = *max_element(nums.begin(), nums.end());
        int n = nums.size();

        vector<int>arr(max_ele + n + 1, 0);

        int count = 0;

        for(int &x: nums)
        {
            arr[x]++;
        }

        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i] > 1)
            {
                int duplicates = arr[i] - 1;
                arr[i+1] += duplicates;
                arr[i] = 1;
                count += duplicates;
            }
        }

        return count;

    }
};