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
        int front=0, end = n-1;
        
        while(front<=end)
        {
            if(power>=tokens[front])
            {
                score++;
                power -= tokens[front];
                front++;
                max_score = std::max(max_score, score);
            }
            else if(score > 0)
            {
                score--;
                power += tokens[end];
                end--;
            }
            else
                break;
        }
        return max_score;
    }
};

