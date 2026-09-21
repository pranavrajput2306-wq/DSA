class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>S;
     for(string s:operations){
        if(s=="C"){
            S.pop();
        }
        else if(s=="D"){
            int x=S.top();
            S.push(2*x);
        }
        else if(s=="+"){
            int x=S.top();
            S.pop();
            int y=S.top();
            S.pop();
            S.push(y);
            S.push(x);
            S.push(x+y);
        }
        else{
            S.push(stoi(s));
        }
     }   
     int sum=0;
     while(!S.empty()){
        sum+=S.top();
        S.pop();
     }
     return sum;
    }
};