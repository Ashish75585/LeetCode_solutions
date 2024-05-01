#include<iostream>
#include<algorithm>

using namespace std;

class Solution {
public:
    string reversePrefix(string word, char ch) 
    {
        int len = 1;
        for(char ele: word)
        {
            if(ele == ch)
                break;
            len++;
        }
        if(len-1 == word.size())
            return word;

        reverse(word.begin(), word.begin()+len);

        return word;
    }
};