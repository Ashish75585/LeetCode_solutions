#include<iostream>
#include<string>

class Solution {
public:
    int minimumLength(std::string s) 
    {
        int n = s.size();
        int i=0, j=n-1;
        char prefix = s[i], suffix = s[j];
        int min_length = 0;
        
        while(i<=j)
        {
            if(prefix != suffix || n==1)
                break;
            if(s[i] == suffix)
                i++;
            else if(s[j] == prefix)
                j--;
            else if(prefix == suffix)
            {
                if(i == j)
                    break;
                prefix = s[i];
                suffix = s[j];
            }
            else
                break;
        }
        min_length = j-i+1;
        if(min_length<0)
            return 0;
        
        return min_length;
    }
};


int main()
{
    Solution sl;
    int min = sl.minimumLength("ccbcbcbcc");
    printf("%d", min);

    return 0;
}