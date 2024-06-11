// leetcode-1122---Easy.

#include<iostream>
#include<vector>
#include<map>
#include<algorithm>


using namespace std;

// Approach-1: Using Map.
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) 
    {
        int n1 = arr1.size();
        int n2 = arr2.size();
        vector<int>output;

        map<int, int>mp;

        for(auto &x: arr1)
        {
            mp[x]++;
        }    

        for(auto &x : arr2)
        {
            if(mp.find(x) != mp.end())
            {
                for(int i=0; i<mp[x]; i++)
                    output.push_back(x);
            }
            mp.erase(x);
        }

        for(auto &x : mp)
        {
            for(int i=0; i<x.second; i++)
                output.push_back(x.first);
        }

        return output;


    }
};



// Using Count Sort.
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) 
    {
        vector<int>::iterator max_ele = max_element(arr1.begin(), arr1.end());
        vector<int>aux_arr(*max_ele+2, 0);
        vector<int>output;

        for(int &x: arr1)
        {
            aux_arr[x]++;
        }

        for(int &x: arr2)
        {
            while(aux_arr[x] > 0)
            {
                output.push_back(x);
                aux_arr[x]--;
            }
        }

        for(int i=0; i<aux_arr.size(); i++)
        {
            while(aux_arr[i] > 0)
            {
                output.push_back(i);
                aux_arr[i]--;
            }
        }

        return output;

    }
};


int main()
{

    return 0;
}