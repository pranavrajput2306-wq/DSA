#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int x){
     data=x;
     next=nullptr;
    }
};
Node* vectorToLL(vector<int>&nums){
    Node*head=new Node(nums[0]);
    Node*mover=head;
    for(int i=1;i<nums.size();i++){
     Node*temp=new Node(nums[i]);
     mover->next=temp;
     mover=temp;
    }
    return head;
}
void traversal(Node*head){
    Node* temp=head;
    while(temp!=nullptr){
        if(temp->next!=nullptr)
        cout<<temp->data<<"->";   
         else 
         cout<<temp->data;
         temp=temp->next;
   }
}
int main(){
    vector<int>nums;
    int n,ele;
    cout<<"Enter the no. of elements of Link List"<<endl;
    cin>>n;
    cout<<"Enter the elements of Link List"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ele;
        nums.push_back(ele);
    }
    Node*head=vectorToLL(nums);
    cout<<"Your list is "<<endl;
    traversal(head);
}