#include <iostream>

struct ListNode
{
    ListNode * next;
    int data;
}*root=NULL;

class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        if(head == NULL || head->next == NULL)
            return false;
        ListNode *tail = head;

        do
        {
            head=head->next;
            tail=tail->next;
            head=(head!=NULL?head->next:NULL);
        }while(head&&tail && head!=tail);

        if(head==tail)
            return true;
        return false;
    }
};