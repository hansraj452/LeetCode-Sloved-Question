class Solution {
public:
    int strStr(string haystack, string needle) {
             int n=haystack.size();
        int m=needle.size();
        for(int i=0;i<n;i++){
            if(haystack[i]==needle[0]){
                bool tot=true;
                for(int k=0;k<m;k++){
                    if(needle[k]!=haystack[i+k]){
                        tot=false;
                        break;
                    }
                }
                if(tot)
                return i;
            }
        }
        return -1;
    }
};