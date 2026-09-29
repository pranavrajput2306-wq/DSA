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
ListNode* reverse(ListNode* head){
    if(head->next==nullptr){
        return head;
    }
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
    bool isPalindrome(ListNode* head) {
        if(head->next==nullptr) return true;
    ListNode* temp=head;
    int cnt=0;
    while(temp!=nullptr){
        cnt++;
        temp=temp->next;
    }
    int mid=floor(cnt/2) +1;
    temp=head;
    int cnt1=0;
    ListNode* head1=nullptr;
    while(temp!=nullptr){
      cnt1++;
      if(cnt1==mid && cnt%2!=0){
        head1=temp->next;
        head1=reverse(head1);
        break;
      }
       if(cnt1==mid && cnt%2==0){
        head1=temp;
        head1=reverse(head1);
        break;
      }
      temp=temp->next;
    }
   ListNode* temp2=head1;
   temp=head;
    while(temp2!=nullptr){
        if(temp2->val!=temp->val)return false;
        temp=temp->next;
        temp2=temp2->next;
    }
  return true;

    }
};