// Leetcode-easy: 22/03/24: Palindromic Linked List;
#include<iostream>
#include<vector>

using namespace std;


//  Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

// Brute Force.-------: Time Complexity: O(n)------------: Space complexity: O(n);
class Solution {
public:
    bool isPalindrome(ListNode* head) 
    {
        ListNode *p = head;
        vector<int>arr;
        while(p)
        {
            arr.push_back(p->val);
            p=p->next;
        }
        int i=0;
        int j = arr.size()-1;
        while(i<=j)
        {
            if(arr[i] != arr[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
        
        
};