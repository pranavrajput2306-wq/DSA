class Solution {
public:
    bool checkIfPangram(string sentence) {
       int a[26];
       for(int i=0;i<sentence.length();i++){
        a[sentence[i]-'a']++;
       } 
       for(int i=0;i<26;i++){
        if(a[i]==0)return false;
       }
       return true;
    }
};