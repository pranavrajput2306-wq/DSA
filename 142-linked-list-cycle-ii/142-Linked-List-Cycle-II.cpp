/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
 bool isloop(ListNode* &f, ListNode* &s){
    while(f!=nullptr && f->next!=nullptr){
        s=s->next;
        f=f->next->next;
        if(f==s) return true;
    }
    return false;
 }
    ListNode *detectCycle(ListNode *head) {
          if(head==nullptr)return nullptr;
       ListNode* fast=head;
       ListNode* slow=head;
       if(isloop(fast,slow)){
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
       } 
       return nullptr;
    }
};