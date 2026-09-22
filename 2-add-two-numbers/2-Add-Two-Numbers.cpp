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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        int sum=temp1->val + temp2->val;
        ListNode* head=new ListNode(sum%10);
        int carry=sum/10;
        ListNode* mover=head;
        temp1=temp1->next;
        temp2=temp2->next;
        while(temp1!=nullptr && temp2!=nullptr){
            sum=carry+ temp1->val +temp2->val;
            ListNode* temp=new ListNode(sum%10);
            carry=sum/10;
            mover->next=temp;
            mover=temp;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        while(temp1!=nullptr){
            sum=carry+temp1->val;
            ListNode* temp=new ListNode(sum%10);
            carry=sum/10;
            mover->next=temp;
            mover=temp;
            temp1=temp1->next;
        }
         while(temp2!=nullptr){
            sum=carry+temp2->val;
            ListNode* temp=new ListNode(sum%10);
            carry=sum/10;
            mover->next=temp;
            mover=temp;
            temp2=temp2->next;
        }
        if(carry==1){
            ListNode* temp=new ListNode(1);
            mover->next=temp;
            mover=temp;
        }
       return head;
    }
};