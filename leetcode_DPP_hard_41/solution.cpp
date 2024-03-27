// 41:- First Missing Positive-------26/03/24
#include<iostream>
#include<vector>

using namespace std;

// Approach-1: Using Hash table.
// Time Complexity: O(n)
// Auxiliary Space Complexity: O(n)
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> arr(n+1,0);
        for(int ele : nums)
        {
            if(ele > 0 && ele <= n)
                arr[ele]++;
        }   
        for(int i=1; i<n+1; i++)
        {
            if(arr[i] == 0)
                return i;
        }
        return n+1;
    }
};


int main()
{

    return 0;
}