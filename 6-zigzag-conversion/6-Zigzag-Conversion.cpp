class Solution {
public:
    string convert(string s, int numRows) {
        vector<string>rows(numRows,"");
        if(numRows==1||numRows>=s.length()){
            return s;
        }
        string result="";
        int currentrow=0;
        bool movdown=true;
        for(char c:s){
            rows[currentrow]+=c;
            if(currentrow==0){
                movdown=true;
            }else if(currentrow==numRows-1){
                movdown=false;
            }
            if(movdown){
                currentrow++;
            }else{
                currentrow--;
            }
        }
        for(string row:rows){
            result+=row;

        } return result;

        
    }
};