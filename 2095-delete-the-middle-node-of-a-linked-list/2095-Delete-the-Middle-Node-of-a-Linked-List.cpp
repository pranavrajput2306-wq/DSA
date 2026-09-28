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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==nullptr) return nullptr;
        ListNode* temp=head;
        int cnt=0;
        while(temp!=nullptr){
            cnt++;
            temp=temp->next;
        }
        int k=floor(cnt/2) + 1;
        ListNode* prev=nullptr;
        ListNode* curr=head;
        cnt=0;
        while(curr!=nullptr){
            cnt++;
            if(cnt==k){
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