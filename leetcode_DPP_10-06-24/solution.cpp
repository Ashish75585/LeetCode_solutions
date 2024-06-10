// 1051. EASY --- Height Checker

#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

// Using Auxiliary Array
class Solution {
public:
    int heightChecker(vector<int>& heights) 
    {
        vector<int>expected;
        int count = 0;
        for(int i=0; i<heights.size(); i++)
            expected.push_back(heights[i]);

        sort(expected.begin(), expected.end());

        for(int i=0; i<heights.size(); i++)
        {
            if(heights[i] != expected[i])
                count++;
        }

        return count;
    }
};

//