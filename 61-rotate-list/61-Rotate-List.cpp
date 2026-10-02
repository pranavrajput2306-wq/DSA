/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
*/

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
     if(head==nullptr) return head;
     ListNode* temp=head;
     int cnt=0;
     while(temp!=nullptr){
     cnt++;
     temp=temp->next;
     }
     k%=cnt;
     temp=head;
     while(temp->next!=nullptr){
        temp=temp->next;
     }
     temp->next=head;
     temp=head;
     ListNode* newhead=nullptr;
     int n=cnt;
     cnt=0;
     while(temp!=nullptr){
        cnt++;
        if(cnt==n-k){
           newhead=temp->next;
           temp->next=nullptr; 
        }
        temp=temp->next;
     }
     head=newhead;
     return head;
    }
};