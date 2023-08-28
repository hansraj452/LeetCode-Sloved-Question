class Solution {
public:
    string removeOuterParentheses(string s) {
      string ans = "";
        int cnt = 0;
        bool flag = true;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                cnt++;
            }
            else if(s[i] == ')'){
                cnt--;
            }
        if(cnt== 1 && flag == true){
            flag = false;
            continue;
        }
        if(cnt== 0 && flag == false){
            flag = true;
            continue;
        }
            ans = ans+s[i];
        }
       return ans;
    }
};