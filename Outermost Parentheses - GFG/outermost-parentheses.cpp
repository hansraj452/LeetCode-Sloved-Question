//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) {
        // code here
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

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends