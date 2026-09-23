
class ListNode{
  public:
    int data;
    ListNode *next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : data(x), next(next) {}
};


class Solution {
    public:
        ListNode* sortList(ListNode* &head) {
        //     ListNode* temp=head;
        //     int cnt0=0,cnt1=0,cnt2=0;
        //     ListNode* dummy=new ListNode(-1);
        //     ListNode* mover=dummy;
        //     while(temp!=nullptr){
        //      if(temp->data==0)cnt0++;
        //      else if(temp->data==1)cnt1++;
        //      else cnt2++;
        //      temp=temp->next;
        //     }
        // for(int i=0;i<(cnt0+cnt1+cnt2);i++){
        //     if(i<cnt0){
        //         ListNode* curr=new ListNode(0);
        //         mover->next=curr;
        //         mover=curr;
        //     }
        //      else if(i>=cnt0 && i<(cnt0+cnt1)){
        //         ListNode* curr=new ListNode(1);
        //         mover->next=curr;
        //         mover=curr;
        //     }
        //       else {
        //         ListNode* curr=new ListNode(2);
        //         mover->next=curr;
        //         mover=curr;
        //     }
        // }
        // return dummy->next;
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* zerohead=new ListNode(-1);
          ListNode* onehead=new ListNode(-1);
            ListNode* twohead=new ListNode(-1);
            ListNode* zero=zerohead;
            ListNode* one=onehead;
            ListNode* two=twohead;
            ListNode* temp=head;
            while(temp!=nullptr){
                if(temp->data==0){
                    zero->next=temp;
                    zero=temp;
                }
                else if(temp->data==1){
                    one->next=temp;
                    one=temp;
                }
                else{
                    two->next=temp;
                    two=temp;
                }
                temp=temp->next;
            }
            two->next=nullptr;
          zero->next=(onehead->next)?onehead->next:twohead->next;
          one->next=twohead->next;
          return zerohead->next;
        }
    };
        
    
