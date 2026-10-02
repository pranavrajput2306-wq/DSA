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
    ListNode* reverseKGroup(ListNode* head, int k) {
     if(head==nullptr || k==1) return head;
     ListNode* curr=head;
     for(int i=1;i<=k;i++){
        if(curr==nullptr){
            return head;
        }
        curr=curr->next;
     }   
      curr=head;
     ListNode* prev=nullptr;
     for(int i=1;i<=k;i++){
        ListNode* front=curr->next;
        curr->next=prev;
        prev=curr;
        curr=front;
     }
     head->next=reverseKGroup(curr,k);
     return prev;
    }
};