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
ListNode* merge2Lists(ListNode* temp1, ListNode* temp2){
    ListNode* dummy=new ListNode(-1);
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
    if(temp1){
        tail->next=temp1;
    }
    if(temp2){
        tail->next=temp2;
    }
    return dummy->next;
}
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return nullptr;
        while(lists.size()>1){
            vector<ListNode*>temp;
            for(int i=0;i<lists.size();i+=2){
                ListNode* l1=lists[i];
                ListNode* l2= i+1 < lists.size()? lists[i+1]:nullptr;
                temp.push_back(merge2Lists(l1,l2));
            }
            lists=move(temp);
        }
        return lists[0];
    }
};