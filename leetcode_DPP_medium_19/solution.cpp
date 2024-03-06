#include <iostream>
#include<vector>

struct ListNode
{
    ListNode * next;
    int data;
}*root=NULL;

//Code to create the linked list.
void CreateLinkedList(std::vector<int>&arr)
{
    root = new ListNode;
    root->data = arr[0];
    root->next = NULL;
    ListNode *temp =NULL;
    ListNode *p = root;
    for(int i=1; i<static_cast<int>(arr.size()); i++)
    {
        temp = new ListNode;
        temp->data = arr[i];
        temp->next = NULL;
        p->next = temp;
        p=p->next;
    } 
}

void display(ListNode *p)
{
    while(p)
    {
        printf("%d ", p->data);
        p=p->next;
    }
}

// // Brute force.
// class Solution {
// public:
    
//     ListNode * ReversingLinkedList(ListNode *p)
//     {
//         ListNode *tail = NULL, *middle = NULL;
//         while(p)
//         {
//             tail = middle;
//             middle = p;
//             p=p->next;

//             middle->next = tail;
//         }
//         return middle;
//     }
    
//     ListNode* removeNthFromEnd(ListNode* head, int n)
//     {
//         if(head->next != NULL)
//         {
//             head= ReversingLinkedList(head);
//             if(n==1)
//             {
//                 head = head->next;
//                 return ReversingLinkedList(head);
//             }
//             ListNode *p = head;
//             int i=1;
//             ListNode *tail = NULL;
//             while(i<n)
//             {
//                 tail =p;
//                 p = p->next;
//                 i++;
//             }
//             tail->next = p->next;
//             delete p;
//             return ReversingLinkedList(head);
//         }
//         return NULL;
        
//     }
// };


//Optimal Solution.
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode;
        dummy->data = 0;
        dummy->next = head;
        ListNode* first = dummy;
        ListNode* second = dummy;

        for (int i = 0; i <= n; ++i) {
            first = first->next;
        }

        while (first != nullptr) {
            first = first->next;
            second = second->next;
        }

        ListNode* temp = second->next;
        second->next = second->next->next;
        delete temp;

        return dummy->next;
    }
};


int main()
{
    Solution st;
    std::vector<int>arr = {2,3,4,5,6,7,8};
    CreateLinkedList(arr);
    display(root);
    ListNode *d = st.removeNthFromEnd(root, 2);
    display(d);
 

    return 0;
}