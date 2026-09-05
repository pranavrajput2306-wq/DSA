class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_map<int,int>arr1;
        unordered_map<int,int>arr2;
        for(int val:nums1){
            arr1[val]++;
        }
        for(int val:nums2){
            arr2[val]++;
        }
        int ans1=0,ans2=0;
        for(int i=0;i<nums1.size();i++){
            if(arr2.count(nums1[i])){
                ans1++;
            }
        }
        for(int j=0;j<nums2.size();j++){
            if(arr1.count(nums2[j]))ans2++;
        }
        return {ans1,ans2};
    }
};