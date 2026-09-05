#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    public:
    Node(int x){
        data=x;
        next=nullptr;
    }
};
Node* vectoLL(vector<int>&nums){
    Node* head=new Node(nums[0]);
    Node* mover=head;
    for(int i=1;i<nums.size();i++){
        Node*temp=new Node(nums[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int count(Node* head){
    int cnt=0;
     Node* temp= head;
    while(temp!=nullptr){
        cnt++;
        temp=temp->next;
    }
   return cnt; 
}
bool search(Node* head,int x){
  Node* temp=head;
  while(temp){
    if(temp->data == x)return true;
    temp=temp->next;
  }
  return false;
}
int main(){
    vector<int>nums;
    int val;
    cout<<"Enter the Array elements"<<endl;
    for(int i=0;i<4;i++){
        cin>>val;
        nums.push_back(val);
    }
    Node* head=vectoLL(nums);
    Node* temp= head;
    while(temp!=nullptr){
        if(temp->next!=nullptr)
        cout<<temp->data<<"->";
        else
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
    cout<<"The number of nodes in LL are: "<<count(head)<<endl;
    int x;
    cout<<"enter the element to be searched "<<endl;
    cin>>x;
    if(search(head,x))
    cout<<"element found in the list";
    else
    cout<<"not found";
}