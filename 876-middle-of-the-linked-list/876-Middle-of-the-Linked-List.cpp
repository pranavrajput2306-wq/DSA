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
    ListNode* middleNode(ListNode* head) {
       int cnt=0,ans;
       ListNode* temp=head;
       while(temp!=nullptr){
        cnt++;
        temp=temp->next;
       } 
       if(cnt%2!=0){
        ans=(cnt+1)/2;
       }
       else{
        ans=cnt/2+1;
       }
       cnt=0;
       temp=head;
       while(temp!=nullptr){
         cnt++;
         if(cnt==ans){
            return temp;
         }
         temp=temp->next;
       }
       return head;
    }
};