// Date : 19/03/24 , TOPIC:- Task Scheduler.

#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

// Using max heap/priority queue and double ended queue.
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) 
    {
        int freq[26] = {0};
        for(char &ch: tasks)
            freq[ch -'A']++;
        
        priority_queue<int>pq;
        deque<vector<int>>dq;
        int top = 0;
        for(int i=0; i<26; i++)
        {
            if(freq[i] > 0)
                pq.push(freq[i]);
        }
        int time = 0;
        while(!pq.empty() || !dq.empty())
        {
            time++;
            if(!pq.empty())
            {
                top = pq.top()-1;
                pq.pop();
                if(top)
                    dq.push_back({top, time+n});
            }
            if(!dq.empty() && dq.front()[1] == time)
            {
                pq.push(dq.front()[0]);
                dq.pop_front();
            }
        }
        return time;
        
    }
};

int main()
{
    Solution sp;
    vector<char> tasks = {'A','B','A','B','A','B'};
    sp.leastInterval(tasks, 2);

    return 0;
}