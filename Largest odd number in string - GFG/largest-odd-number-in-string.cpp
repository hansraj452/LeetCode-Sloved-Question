//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string maxOdd(string num) {
        // your code here
        int n=num.size();
        int i=0;

        for(i=n-1; i>=0; i--){
            if(num[i]%2!=0) break;
            else if(i==0 and num[i]%2==0)  
            return "";
        }
        return num.substr(0,i+1);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;

        cout << ob.maxOdd(s) << endl;
    }
}

// } Driver Code Ends