#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

class Solution {
public:
    string customSortString(string order, string s) 
    {
        unordered_map<char, int>umap;
        
        for(char c: order)
            umap[c] = 0;
        
        for(char c: s)
        {
            if(umap.find(c) != umap.end())
                umap[c]++;
        }
        
        string output="";
        for(char c: order)
            output.append(umap[c], c);
        
        for(char c: s)
        {
            if(umap.find(c) == umap.end())
                output.push_back(c);
        }
        
        return output;
    }
};