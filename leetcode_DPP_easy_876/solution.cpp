#include <iostream>


 struct ListNode {
     int val;
     ListNode *next;
};

// // Brute Force.
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) 
//     {
//         ListNode *p = head->next;
//         int count = 1;
//         while(p)
//         {
//             p=p->next;
//             count++;
//         }
//         int mid_val = count/2 + 1;
//         p=head;
//         for(int i=1; i<mid_val; i++)
//         {
//             p=p->next;
//         }
        
//         return p;
//     }
// };



// Optimal Solution
class Solution {
public:
    ListNode* middleNode(ListNode* head) 
    {
        ListNode *p=head, *q=head;
        while(p)
        {
            p=p->next;
            if(p)
            {
                q=q->next;
                p=p->next;
            }
        }
        return q;
    }
};