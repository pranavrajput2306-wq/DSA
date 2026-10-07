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
 vector<int>LLtoarr(ListNode* head){
    vector<int>ans;
    ListNode* temp=head;
    while(temp!=nullptr){
      ans.push_back(temp->val);
      temp=temp->next;
    }
    return ans;
 }
    ListNode* sortList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        vector<int>arr =LLtoarr(head);
        sort(arr.begin(),arr.end());
        ListNode* temp=head;
        int i=0;
        while(temp!=nullptr){
            temp->val=arr[i];
            i++;
            temp=temp->next;
        }
      return head;
    }
};

