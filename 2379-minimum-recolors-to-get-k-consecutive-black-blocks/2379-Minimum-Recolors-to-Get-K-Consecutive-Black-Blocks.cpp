class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int nw=0,mw=0;
        for(int i=0;i<k;i++)
        {
            if(blocks[i]=='W'){
                nw++;
            }
        }  
        mw=nw;
      for(int i=k;i<blocks.size();i++){
        if(blocks[i]=='W'){
            nw++;
        }
        if(blocks[i-k]=='W'){
            nw--;
        }
        mw=min(mw,nw);
      } 
      return mw;
    }
};