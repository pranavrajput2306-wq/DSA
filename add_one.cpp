struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = nullptr;
    }
    ListNode(int data1)
    {
        val = data1;
        next = nullptr;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
ListNode* reverse(ListNode *head){
    ListNode* prev=nullptr;
    ListNode* curr=head;
    ListNode* next1=head->next;
    while(curr!=nullptr){
        curr->next=prev;
        prev=curr;
        curr=next1;
        if(next1!=nullptr)
        next1=next1->next;
    }
     return prev;
}
class Solution {
public:
    ListNode *addOne(ListNode *head) {
        if(head==nullptr) return head;
    ListNode* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
        if(temp->val !=9){
            temp->val+=1;
            return head;
        }
     head=reverse(head);
     temp=head; 

     while(temp !=nullptr && temp->val==9){
        temp->val=0;
        temp=temp->next;
     } 
     if(temp==nullptr){
        temp=head;
        while(temp->next!=nullptr)
        temp=temp->next;
        ListNode* newNode=new ListNode(1);
        temp->next=newNode;
     }
     else{
        temp->val++;
     }
     head=reverse(head);
     return head;
    }
};