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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt1=0;
        ListNode* temp=head;
        while(temp!=nullptr){
            cnt1++;
            temp=temp->next;
        }
        n=cnt1-n+1;
        if(n==1){
           temp=head;
           head=head->next;
           delete temp;
           return head;
        }
        ListNode* prev=nullptr;
        ListNode* curr=head;
        cnt1=0;
        while(curr!=nullptr){
            cnt1++;
            if(cnt1==n){
                prev->next=curr->next;
                delete curr;
                return head;
            }
            prev=curr;
            curr=curr->next;
        }
        return head;
    }
};