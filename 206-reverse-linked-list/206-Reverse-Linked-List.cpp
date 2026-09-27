/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr) return head;
        ListNode* prev=nullptr;
        ListNode* curr=head;
        ListNode* next1=head->next;
        while(curr!=nullptr){
            curr->next=prev;
            prev=curr;
            curr=next1;
            if(next1)
            next1=next1->next;
        }
        return prev;
    }
};