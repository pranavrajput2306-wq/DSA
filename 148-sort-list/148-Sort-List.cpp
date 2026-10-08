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
ListNode* findMiddle(ListNode* head){
    ListNode* slow=head;
    ListNode* fast=head->next;
    while(fast!=nullptr && fast->next!=nullptr) {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
ListNode* mergeTwoLists(ListNode* temp1, ListNode* temp2){
    ListNode* dummy=new ListNode(-1);
    ListNode* tail=dummy;
    while(temp1!=nullptr && temp2!=nullptr){
        if(temp1->val<=temp2->val){
            tail->next=temp1;
            tail=temp1;
            temp1=temp1->next;
        }
        else{
            tail->next=temp2;
            tail=temp2;
            temp2=temp2->next;
        }
    }
    while(temp1!=nullptr){
        tail->next=temp1;
        tail=temp1;
        temp1=temp1->next;
    }
      while(temp2!=nullptr){
        tail->next=temp2;
        tail=temp2;
        temp2=temp2->next;
    }
    return dummy->next;
}

ListNode* sortList(ListNode* head) {

if(head==nullptr || head->next==nullptr)
return head;
ListNode* middle =findMiddle(head);
ListNode* lefthead=head;
ListNode* righthead=middle->next;
middle->next=nullptr;
lefthead=sortList(lefthead);
righthead=sortList(righthead);
return mergeTwoLists(lefthead,righthead);
    }
};

