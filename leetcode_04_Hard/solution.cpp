#include<iostream>
#include<vector>

using namespace std;
// // Brute Force. 
// // Time Complexity: O(m+n)
// // Space Complexity: O(n)
// class Solution {
// public:
//     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
//     {
//         vector<int>arr;
//         int i=0, j=0;
//         int count = nums1.size()+nums2.size();
//         int mid = count/2;
//         while(i<static_cast<int>(nums1.size()) && j<static_cast<int>(nums2.size()))
//         {
//             if(nums1[i]<nums2[j])
//             {
//                 arr.push_back(nums1[i]);
//                 i++;
//             }
//             else
//             {
//                 arr.push_back(nums2[j]);
//                 j++;
//             }
            
//         }
//         for(; i<static_cast<int>(nums1.size()); i++)
//         {
//             arr.push_back(nums1[i]);
//         }
//         for(; j<static_cast<int>(nums2.size()); j++)
//         {
//             arr.push_back(nums2[j]);
//         }
//         if(count%2 == 0)
//         {
//             return static_cast<double>((arr[mid-1]+arr[mid]))/2;
//         }
//         return static_cast<double>(arr[mid]);
//     }
// };


// Using Merge sort and without using extra Array.
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        int i=0, j=0;
        int n= int(nums1.size()), m=int(nums2.size());
        
              
    }
};


int main()
{
    vector<int>nums1 = {1,2};
    vector<int>nums2 = {3,4};
    Solution st;
    
    double val = st.findMedianSortedArrays(nums1, nums2);
    printf("\n%lf", val); 

    return 0;
}