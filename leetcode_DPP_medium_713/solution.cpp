// SubArray Product less than k;
#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

//1. Brute Force.
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        int output = 0;
        for(int i=0; i<nums.size(); i++)
        {
            int product = nums[i];
            if(product < k)
                output++;
            int j = i+1;
            for(j; j<nums.size(); j++)
            {
                product = product * nums[j];
                if(product < k)
                {
                    output++;
                }
                else
                    break;
            }

        }   
        return output;  
    }
};

//2. Sliding Window;
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        int left = 0, right = 0;
        int product = 1, count = 0;
        int n  = nums.size();
        if(k<=1) return 0;
        while(right < n)
        {
            product *= nums[right];
            while(product >= k)
            {
                product /= nums[left];
                left++;
            }
            count += 1+(right - left);
            right++;
        }
        return count;
    }
};

// 3. Using Binary Search and using LOGARITHMIC Property.
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k == 0) return 0;
        double logK = log(k);
        int m = nums.size() + 1;
        vector<double> logsPrefixSum(m);

        // Calculate prefix sum of logarithms of elements
        for (int i = 0; i < nums.size(); i++) {
            logsPrefixSum[i + 1] = logsPrefixSum[i] + log(nums[i]);
        }

        int totalCount = 0;
        // Calculate subarray count with product less than k
        for (int currIdx = 0; currIdx < m; currIdx++) {
            int low = currIdx + 1, high = m;
            while (low < high) {
                int mid = low + (high - low) / 2;
                if (logsPrefixSum[mid] < logsPrefixSum[currIdx] + logK - 1e-9) {
                    low = mid + 1;
                } else {
                    high = mid;
                }
            }
            totalCount += low - currIdx - 1;
        }
        return totalCount;
    }
};

int main()
{

    return 0;
}