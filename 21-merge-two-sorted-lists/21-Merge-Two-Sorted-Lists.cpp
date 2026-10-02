// Definition of singly linked list:
// struct ListNode
// {
//     int val;
//     ListNode *next;
//     ListNode(int data1)
//     {
//         val = data1;
//         next = NULL;
//     }
//     ListNode(int data1, ListNode *next1)
//     {
//         val = data1;
//         next = next1;
//     }
// };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* temp1=list1;
    ListNode* temp2=list2;
    ListNode* dummy= new ListNode(0);
    ListNode* tail=dummy;
    while(temp1!=nullptr && temp2!=nullptr){
        if(temp1->val<=temp2->val){
            tail->next=temp1;
            tail=temp1;
            temp1=temp1->next;
        }
        else{
            tail->next=temp2;
            tail=temp2;
            temp2=temp2->next;
        }
    }
    while(temp1){
        tail->next=temp1;
        tail=temp1;
        temp1=temp1->next;
    }
        while(temp2){
        tail->next=temp2;
        tail=temp2;
        temp2=temp2->next;
    }
    return dummy->next;
    }
};