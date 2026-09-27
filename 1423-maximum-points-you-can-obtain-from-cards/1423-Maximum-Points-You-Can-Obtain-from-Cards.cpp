class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        long long mp=0;
        long long ls=0,rs=0;
        for(int i=0;i<k;i++){
            ls+=cardPoints[i];
        }
      mp=ls;
      for(int i=0;i<k;i++){
        ls-=cardPoints[k-1-i];
        rs+=cardPoints[cardPoints.size()-1-i];
        mp=max(mp,(ls+rs));
      }
      return mp;
    }
};