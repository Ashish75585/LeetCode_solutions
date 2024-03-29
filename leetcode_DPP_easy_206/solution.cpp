// Date: 21/03/24; Topic:- Reverse Linked List.
#include<iostream>

//  Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
        if(head == NULL)
            return head;
        ListNode *p = head->next, *q = head, *r = NULL;
        while(p)
        {
            q->next = r;
            r=q;
            q=p; 
            p=p->next;
        }
        q->next = r;
        return q;
        
    }
};