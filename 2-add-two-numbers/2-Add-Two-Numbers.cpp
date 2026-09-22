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
    //     ListNode* temp1=l1;
    //     ListNode* temp2=l2;
    //     int sum=temp1->val + temp2->val;
    //     ListNode* head=new ListNode(sum%10);
    //     int carry=sum/10;
    //     ListNode* mover=head;
    //     temp1=temp1->next;
    //     temp2=temp2->next;
    //     while(temp1!=nullptr && temp2!=nullptr){
    //         sum=carry+ temp1->val +temp2->val;
    //         ListNode* temp=new ListNode(sum%10);
    //         carry=sum/10;
    //         mover->next=temp;
    //         mover=temp;
    //         temp1=temp1->next;
    //         temp2=temp2->next;
    //     }
    //     while(temp1!=nullptr){
    //         sum=carry+temp1->val;
    //         ListNode* temp=new ListNode(sum%10);
    //         carry=sum/10;
    //         mover->next=temp;
    //         mover=temp;
    //         temp1=temp1->next;
    //     }
    //      while(temp2!=nullptr){
    //         sum=carry+temp2->val;
    //         ListNode* temp=new ListNode(sum%10);
    //         carry=sum/10;
    //         mover->next=temp;
    //         mover=temp;
    //         temp2=temp2->next;
    //     }
    //     if(carry==1){
    //         ListNode* temp=new ListNode(1);
    //         mover->next=temp;
    //         mover=temp;
    //     }
    //    return head;
    ListNode* temp1=l1;
    ListNode* temp2=l2;
    ListNode* dummy=new ListNode(-1);
    ListNode* mover=dummy;
    int sum=0,carry=0;
    while(temp1!=nullptr || temp2!=nullptr){
        sum=carry;
        if(temp1){
            sum+=temp1->val;
             temp1=temp1->next;
        }
        if(temp2){
            sum+=temp2->val;
             temp2=temp2->next;
        }
        ListNode* temp=new ListNode(sum%10);
        carry=sum/10;
        mover->next=temp;
        mover=temp;
    }
    if(carry==1){
        ListNode* temp=new ListNode(1);
        mover->next=temp;
        mover=temp;
    }
    return dummy->next;
    }
};