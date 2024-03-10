#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) 
    {
        int i=0, j=0;
        int n = nums1.size(), m=nums2.size();
        int min_common = -1;
        
        while(i<n && j<m)
        {
            if(nums1[i] == nums2[j])
            {
                min_common = nums1[i];
                break;
            }
            else if(nums1[i]<nums2[j])
                i++;
            else
                j++;
        }
        
        return min_common;
    }
};

int main()
{
    vector<int>nums1 = {1,2,3,6};
    vector<int>nums2 = {2,3,4,5};

    Solution sp;
    int value = sp.getCommon(nums1, nums2);
    printf("%d\n", value);

    return 0;
}