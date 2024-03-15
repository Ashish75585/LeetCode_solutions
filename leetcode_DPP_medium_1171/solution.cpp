#include<iostream>
#include<unordered_map>

using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

// Approach-1: Prefix Sum for Each Consecutive Sequence 
class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) 
    {
        ListNode *front = new ListNode;
        front->val = 0;
        front->next = head;
        ListNode *start = front;
        
        while(start != NULL)
        {
            int prefixSum = 0;
            ListNode *end = start->next;
            while(end != NULL)
            {
                prefixSum += end->val;
                if(prefixSum == 0)
                    start->next = end->next;
                end = end->next;
            }
            start=start->next;
        }
        return front->next;
    }
};

// Using hash map ------ Optimal Solution
class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) 
    {
        ListNode *front = new ListNode;
        front->val = 0;
        front->next = head;
        ListNode *current = front;
        int prefixSum = 0;
        unordered_map<int, ListNode*>prefixSumToNode;
        prefixSumToNode[0] = front;
        
        while(current != NULL)
        {
            prefixSum += current->val;
            prefixSumToNode[prefixSum] = current;
            current = current->next;
        }
        prefixSum = 0;
        current = front;
        
        while(current != NULL)
        {
            prefixSum += current->val;
            current->next = prefixSumToNode[prefixSum]->next;
            current = current->next;
        }
        return front->next;
        
    }
};