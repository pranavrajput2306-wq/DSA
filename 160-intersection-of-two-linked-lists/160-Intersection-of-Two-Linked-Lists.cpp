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
ListNode* intersectionPoint(ListNode* temp1,ListNode* temp2,int d){
   while(d){
    d--;
    temp2=temp2->next;
   }
   while(temp1!=temp2){
    temp1=temp1->next;
    temp2=temp2->next;
   }
   return temp1;
}
     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
     ListNode* temp=headA;
     int n1=0;
     while(temp!=nullptr){
        n1++;
        temp=temp->next;
     }
     temp=headB;
     int n2=0;
     while(temp!=nullptr){
        n2++;
        temp=temp->next;
     }
     if(n2>=n1){
        return intersectionPoint(headA,headB,n2-n1);
     }
     else{
        return intersectionPoint(headB,headA,n1-n2);
     }
    }
};