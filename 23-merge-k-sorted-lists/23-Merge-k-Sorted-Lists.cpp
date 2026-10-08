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
vector<int>LLtoarr(vector<ListNode*> &lists){
    vector<int>ans;
    for(ListNode* list:lists){
        ListNode* t1=list;
        while(t1!=nullptr){
            ans.push_back(t1->val);
            t1=t1->next;
        }
    }
    return ans;
}
ListNode* convert(vector<int>nums){
    if(nums.empty()) return nullptr;
    ListNode* head= new ListNode (nums[0]);
    ListNode* mover=head;
    for(int i=1;i<nums.size();i++){
        ListNode* temp=new ListNode(nums[i]);
        mover->next=temp;
        mover=temp;
    }
    mover->next=nullptr;
    return head;
}
        ListNode* mergeKLists(vector<ListNode*>& lists) {
            if(lists.empty()) return nullptr;
        vector<int>ansvec=LLtoarr(lists);
        sort(ansvec.begin(),ansvec.end());
        return convert(ansvec);
    }
};