// Date: 20/03/24; Topic:- Merge In Between Linked List.
#include<iostream>


 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) 
    {
        ListNode *p = list1, *q = list1;
        int i=0, j=0;
        
        while(i<a-1)
        {
            p=p->next;
            i++;
        }
        while(j < b+1)
        {
            q=q->next;
            j++;
        }
        
        p->next = list2;
        while(p->next != NULL)
            p=p->next;
        
        p->next = q;
        return list1;
    }
};