class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    //   set<vector<int>>ans;
    //   for(int i=0;i<nums.size();i++){
    //       set<int>hashset;
    //       for(int j=i+1;j<nums.size();j++){
    //         int third=-(nums[i]+nums[j]);
    //         if(hashset.find(third)!=hashset.end()){
    //             vector<int>temp={nums[i],nums[j],third};
    //             sort(temp.begin(),temp.end());
    //             ans.insert(temp);
    //         }
    //         hashset.insert(nums[j]);

    //       }
    //   }
    //       vector<vector<int>>final (ans.begin(),ans.end());
    //   return final;
    sort(nums.begin(),nums.end());
   vector<vector<int>>ans;
   for(int i=0;i<nums.size();i++){
    if(i>0 && nums[i]==nums[i-1]) 
    continue;
    int l=i+1,r=nums.size()-1;
    while(l<r){
        int sum=nums[l]+nums[r]+nums[i];
        if(sum==0){
            vector<int>temp={nums[i],nums[l],nums[r]};
            ans.push_back(temp);
            l++; r--;
            while(l<r && nums[l]==nums[l-1])l++;
            while(l<r && nums[r]==nums[r+1])r--;
        }
        else if(sum<0){
            l++;
        }
        else{
            r--;
        }
    }
   }
   return ans;

    }
};