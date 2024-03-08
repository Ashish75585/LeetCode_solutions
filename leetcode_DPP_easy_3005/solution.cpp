#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) 
    {
        vector<int>arr(110,0);
        for(int ele:nums)
        {
            arr[ele]++;
        }
        int count=arr[0];
        int total =count;
        for(int i=1; i<arr.size(); i++)
        {
            if(arr[i]>count)
            {
                count = arr[i];
                total=count;
            }
            else if(arr[i] == count)
            {
                total += count;
            }

        }
        return total;
    }
};