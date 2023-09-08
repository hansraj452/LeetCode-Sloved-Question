class Solution {
public:
    int maxDepth(string s) {
        int depth=0 , open=0;
       for(int i=0;i<s.size();i++){
           if(s[i]== '('){
               open++;
           }
           if(s[i] == ')'){
               open--;
           }
           depth = max(depth , open);
       }
        return depth;
    }
};