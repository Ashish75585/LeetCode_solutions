#include<iostream>
#include<vector>
#include<algorithm>

class Solution {
public:
    int bagOfTokensScore(std::vector<int>& tokens, int power) 
    {
        std::sort(tokens.begin(), tokens.end());
        int n = tokens.size();
        int score =0;
        int max_score=0;
        int i=0, j = n-1;
        
        while(i<=j)
        {
            if(power>=tokens[i])
            {
                score++;
                power -= tokens[i];
                i++;
                max_score = std::max(max_score, score);
            }
            else if(score > 0)
            {
                score--;
                power += tokens[j];
                j--;
            }
            else
                break;
        }
        return max_score;
    }
};

