#include<iostream>
#include<vector>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) 
{
    vector<int>answer;
    int prefix_product = nums[0];
    answer.push_back(1);
    for(int i=1; i<int(nums.size()); i++)
    {
        answer.push_back(prefix_product);
        prefix_product *= nums[i];
    }
    int n = answer.size();
    int suffix_product = nums[n-1];
    for(int i=n-2; i>=0; i--)
    {
        answer[i] = answer[i]*suffix_product;
        suffix_product *= nums[i];
    }
    return answer;
}

int main()
{
    vector<int>nums = {-1,1,0,-3,3};
    productExceptSelf(nums);
    
    return 0;
}